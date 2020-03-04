#include "log_message.h"
#include "CANopen.h"
#include "CO_Linux_tasks.h"
#include "CO_time.h"
#include "file_transfer_ODF.h"
#ifdef MAIN_PROCESS_DBUS_APP
#include "application.h"
#endif
#ifdef LINUX_UPDATER_DBUS_APP
#include "linux_updater_app.h"
#endif
#ifdef SYSTEMD_DBUS_APP
#include "systemd_app.h"
#endif
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sched.h>
#include <signal.h>
#include <errno.h>
#include <sys/epoll.h>
#include <net/if.h>
#include <linux/reboot.h>
#include <sys/reboot.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdint.h>
#include <stdbool.h>
#include <sys/stat.h>
#include <syslog.h>
#include <stdarg.h>


#define TMR_TASK_INTERVAL_NS    (1000000)       // Interval of taskTmr in nanoseconds
#define TMR_TASK_OVERFLOW_US    (5000)          // Overflow detect limit for taskTmr in microseconds
#define INCREMENT_1MS(var)      (var++)         // Increment 1ms variable in taskTmr
#define DEFAULT_PID_FILE        "/run/oresat-candaemon.pid"


volatile uint16_t           CO_timer1ms = 0U;       // Global variable increments each millisecond.
/* Mutex is locked, when CAN is not valid (configuration state). May be used
 *  from other threads. RT threads may use CO->CANmodule[0]->CANnormal instead. */
pthread_mutex_t             CO_CAN_VALID_mtx = PTHREAD_MUTEX_INITIALIZER;
static int                  rtPriority = -1;        // Real time priority, configurable by arguments. (-1=RT disabled)
static int                  mainline_epoll_fd;      // epoll file descriptor for mainline
static CO_time_t            CO_time;                // Object for current time
volatile sig_atomic_t       CO_endProgram = 0;
static void*                rt_thread(void* arg);
static pthread_t            rt_thread_id;
static int                  rt_thread_epoll_fd;

#ifdef LINUX_UPDATER_DBUS_APP
static void*                linux_updater_thread(void* arg);
static pthread_t            linux_updater_thread_id;
#endif
#ifdef MAIN_PROCESS_DBUS_APP
static void*                main_process_thread(void* arg);
static pthread_t            main_process_thread_id;
#endif
#ifdef SYSTEMD_DBUS_APP_OFF // when connecting to systemd dbus inteface, systemd uses 70% of cpu TODO fix this
static void*                systemd_thread(void* arg);
static pthread_t            systemd_thread_id;
#endif


// Signal handler
static void signal_handler(int sig) {
    CO_endProgram = 1;

    log_message(LOG_DEBUG, "Signal %d call", sig);

    // stop all dbus services threads
#ifdef LINUX_UPDATER_DBUS_APP
    pthread_cancel(linux_updater_thread_id);
#endif
#ifdef MAIN_PROCESS_DBUS_APP
    pthread_cancel(main_process_thread_id);
#endif
#ifdef SYSTEMD_DBUS_APP_OFF
    pthread_cancel(systemd_thread_id);
#endif
}


// canopen.* needs this
void CO_errExit(char* msg) {
    perror(msg);
    exit(EXIT_FAILURE);
}


void CO_error(const uint32_t info) {
    CO_errorReport(CO->em, CO_EM_GENERIC_SOFTWARE_ERROR, CO_EMC_SOFTWARE_INTERNAL, info);
    log_message(LOG_DEBUG, "canopen generic error: 0x%X", info);
}


int main (int argc, char *argv[]) {
    int c;
    char *pid_file = DEFAULT_PID_FILE;
    FILE *run_fp = NULL;
    pid_t pid = 0, sid = 0;
    CO_NMT_reset_cmd_t reset = CO_RESET_NOT;
    int CANdevice0Index = 0;
    bool_t firstRun = true;
    char* CANdevice = NULL;
    int nodeId = OD_CANNodeID; // use OD value
    bool daemon_flag = false;

    // Register signal handlers
    signal(SIGINT, signal_handler);
    signal(SIGTERM, signal_handler);

    // Command line argument processing
    while ((c = getopt(argc, argv, "dl:")) != -1) {
        switch (c) {
            case 'd':
                daemon_flag = true;
                break;
            case 'l':
                CANdevice = optarg;
                break;
            case '?':
                if (optopt == 'l')
                    fprintf(stderr, "flag l requires a argument\n");
                else
                    fprintf(stderr, "Uknown flag\n");
                exit(1);
            default:
                fprintf(stderr, "Usage: %s [-d] [-l link]\n", argv[0]);
                exit(1);
        }
    }

    if (CANdevice == NULL)
        CANdevice = "can1";

    CANdevice0Index = if_nametoindex(CANdevice);

    setlogmask(LOG_UPTO(LOG_NOTICE));
    openlog(argv[0], LOG_PID|LOG_CONS, LOG_DAEMON);

    /* Run as daemon if needed */
    if (daemon_flag) {
        log_message(LOG_DEBUG, "Starting as daemon...\n");
        /* Fork */
        if ((pid = fork()) < 0) {
            log_message(LOG_ERR, "Error: Failed to fork!\n");
            exit(EXIT_FAILURE);
        }

        /* Parent process exits */
        if (pid) {
            exit(EXIT_SUCCESS);
        }

        /* Child process continues on */
        /* Log PID */
        if ((run_fp = fopen(pid_file, "w+")) == NULL) {
            log_message(LOG_ERR, "Error: Unable to open file %s\n", pid_file);
            exit(EXIT_FAILURE);
        }
        fprintf(run_fp, "%d\n", getpid());
        fflush(run_fp);
        fclose(run_fp);

        /* Create new session for process group leader */
        if ((sid = setsid()) < 0) {
            log_message(LOG_ERR, "Error: Failed to create new session!\n");
            exit(EXIT_FAILURE);
        }

        /* Set default umask and cd to root to avoid blocking filesystems */
        umask(0);
        if (chdir("/") < 0) {
            log_message(LOG_ERR, "Error: Failed to chdir to root: %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        /* Redirect std streams to /dev/null */
        if (freopen("/dev/null", "r", stdin) == NULL) {
            log_message(LOG_ERR, "Error: Failed to redirect streams to /dev/null!\n");
            exit(EXIT_FAILURE);
        }
        if (freopen("/dev/null", "w+", stdout) == NULL) {
            log_message(LOG_ERR, "Error: Failed to redirect streams to /dev/null!\n");
            exit(EXIT_FAILURE);
        }
        if (freopen("/dev/null", "w+", stderr) == NULL) {
            log_message(LOG_ERR, "Error: Failed to redirect streams to /dev/null!\n");
            exit(EXIT_FAILURE);
        }
    }

    if(nodeId < 1 || nodeId > 127) {
        log_message(LOG_ERR, "Invalid node ID (%d)\n", nodeId);
        exit(EXIT_FAILURE);
    }

    if(rtPriority != -1 && (rtPriority < sched_get_priority_min(SCHED_FIFO)
                         || rtPriority > sched_get_priority_max(SCHED_FIFO))) {
        log_message(LOG_ERR, "Wrong RT priority (%d)\n", rtPriority);
        exit(EXIT_FAILURE);
    }

    if(CANdevice0Index == 0) {
        log_message(LOG_ERR, "Can't find CAN device \"%s\"\n", CANdevice);
        exit(EXIT_FAILURE);
    }

    log_message(LOG_DEBUG, "Starting Node ID %d(0x%02X)\n", nodeId, nodeId);

    // Verify, if OD structures have proper alignment of initial values
    if(CO_OD_RAM.FirstWord != CO_OD_RAM.LastWord) {
        log_message(LOG_ERR, "Program init - Error in CO_OD_RAM.\n");
        exit(EXIT_FAILURE);
    }
    if(CO_OD_EEPROM.FirstWord != CO_OD_EEPROM.LastWord) {
        log_message(LOG_ERR, "Program init - Error in CO_OD_EEPROM.\n");
        exit(EXIT_FAILURE);
    }
    if(CO_OD_ROM.FirstWord != CO_OD_ROM.LastWord) {
        log_message(LOG_ERR, "Program init - Error in CO_OD_ROM.\n");
        exit(EXIT_FAILURE);
    }

    // Catch signals SIGINT and SIGTERM
    if(signal(SIGINT, signal_handler) == SIG_ERR) {
        log_message(LOG_ERR, "Program init - SIGINIT handler creation failed");
        exit(EXIT_FAILURE);
    }
    if(signal(SIGTERM, signal_handler) == SIG_ERR) {
        log_message(LOG_ERR, "Program init - SIGTERM handler creation failed");
        exit(EXIT_FAILURE);
    }

    // increase variable each startup. Variable is automatically stored in non-volatile memory.
    log_message(LOG_DEBUG, "Power count=%u ...\n", ++OD_powerOnCounter);

    // Create dbus threads
#ifdef SYSTEMD_DBUS_APP_OFF
    if(pthread_create(&systemd_thread_id, NULL, systemd_thread, NULL) != 0)
        log_message(LOG_ERR, "Program init - systemd_thread creation failed\n");
#endif
#ifdef LINUX_UPDATER_DBUS_APP
    if(pthread_create(&linux_updater_thread_id, NULL, linux_updater_thread, NULL) != 0)
        log_message(LOG_ERR, "Program init - linux_updater_thread creation failed\n");
#endif
#ifdef MAIN_PROCESS_DBUS_APP
    if(pthread_create(&main_process_thread_id, NULL, main_process_thread, NULL) != 0)
        log_message(LOG_ERR, "Program init - main_process_thread creation failed\n");
#endif

    while(reset != CO_RESET_APP && reset != CO_RESET_QUIT && CO_endProgram == 0) {
        CO_ReturnError_t err;

        log_message(LOG_DEBUG, "Communication reset ...\n");


        // Wait other threads (command interface).
        pthread_mutex_lock(&CO_CAN_VALID_mtx);

        // Wait rt_thread.
        if(!firstRun) {
            CO_LOCK_OD();
            CO->CANmodule[0]->CANnormal = false;
            CO_UNLOCK_OD();
        }

        // Enter CAN configuration.
        CO_CANsetConfigurationMode(&CANdevice0Index);

        // initialize CANopen
        err = CO_init(&CANdevice0Index, nodeId, 0);
        if(err != CO_ERROR_NO)
            log_message(LOG_ERR, "Communication reset - initialization failed\n");

        // Configure callback functions for task control
        CO_EM_initCallback(CO->em, taskMain_cbSignal);
        CO_SDO_initCallback(CO->SDO[0], taskMain_cbSignal);
        CO_SDOclient_initCallback(CO->SDOclient[0], taskMain_cbSignal);

        // Initialize time
        CO_time_init(&CO_time, CO->SDO[0], &OD_time.epochTimeBaseMs, &OD_time.epochTimeOffsetMs, 0x2130);

        // First time only initialization.
        if(firstRun) {
            firstRun = false;

            // Configure epoll for mainline
            mainline_epoll_fd = epoll_create(4);
            if(mainline_epoll_fd == -1)
                log_message(LOG_ERR, "Program init - epoll_create mainline failed\n");

            // Init mainline
            taskMain_init(mainline_epoll_fd, &OD_performance[ODA_performance_mainCycleMaxTime]);

            // Configure epoll for rt_thread
            rt_thread_epoll_fd = epoll_create(2);
            if(rt_thread_epoll_fd == -1)
                log_message(LOG_ERR, "Program init - epoll_create rt_thread failed\n");

            // Init taskRT
            CANrx_taskTmr_init(rt_thread_epoll_fd, TMR_TASK_INTERVAL_NS, &OD_performance[ODA_performance_timerCycleMaxTime]);

            OD_performance[ODA_performance_timerCycleTime] = TMR_TASK_INTERVAL_NS/1000; /* informative */

            // Create rt_thread
            if(pthread_create(&rt_thread_id, NULL, rt_thread, NULL) != 0)
                log_message(LOG_ERR, "Program init - rt_thread creation failed\n");

            // Set priority for rt_thread
            if(rtPriority > 0) {
                struct sched_param param;

                param.sched_priority = rtPriority;
                if(pthread_setschedparam(rt_thread_id, SCHED_FIFO, &param) != 0)
                    log_message(LOG_ERR, "Program init - rt_thread set scheduler failed\n");
            }

            // set up general ODFs
            file_transfer_ODF_setup();

            // set up dbus services
            systemd_ODF_setup();
            linux_updater_ODF_setup();
            main_process_ODF_setup();
        }

        // start CAN
        CO_CANsetNormalMode(CO->CANmodule[0]);
        pthread_mutex_unlock(&CO_CAN_VALID_mtx);

        reset = CO_RESET_NOT;
        log_message(LOG_DEBUG, "running\n");

        while(reset == CO_RESET_NOT && CO_endProgram == 0) {
            int ready;
            struct epoll_event ev;

            ready = epoll_wait(mainline_epoll_fd, &ev, 1, -1);

            if(ready != 1) {
                if(errno != EINTR) {
                    CO_error(0x11100000L + errno);
                }
            }
            else if(taskMain_process(ev.data.fd, &reset, CO_timer1ms)) {
                /* code was processed in the above function.
                 * Additional code can be process below.
                 */
            }
            else {
                // No file descriptor was processed.
                CO_error(0x11200000L);
            }
        }
    }

    // join threads
    CO_endProgram = 1;
    if(pthread_join(rt_thread_id, NULL) != 0)
        log_message(LOG_ERR, "Program end - pthread_join failed for rt thread");

    // stop dbus threads
#ifdef SYSTEMD_DBUS_APP_OFF
    if(pthread_join(systemd_thread_id, NULL) != 0)
        log_message(LOG_ERR, "Program end - pthread_join failed for systemd app");
#endif
#ifdef LINUX_UPDATER_DBUS_APP
    if(pthread_join(linux_updater_thread_id, NULL) != 0)
        log_message(LOG_ERR, "Program end - pthread_join failed for linux updater app");
#endif
#ifdef MAIN_PROCESS_DBUS_APP
    if(pthread_join(main_process_thread_id, NULL) != 0)
        log_message(LOG_ERR, "Program end - pthread_join failed for main process app");
#endif

    // delete objects from memory
    CANrx_taskTmr_close();
    taskMain_close();
    CO_delete(&CANdevice0Index);

    log_message(LOG_DEBUG, "%s on %s (nodeId=0x%02X) - finished.\n\n", argv[0], CANdevice, nodeId);

    // Flush all buffers (and reboot)
    if(reset == CO_RESET_APP) {
        sync();
        if(reboot(LINUX_REBOOT_CMD_RESTART) != 0) {
            log_message(LOG_ERR, "Program end - reboot failed");
        }
    }

    exit(EXIT_SUCCESS);
}


static void* rt_thread(void* arg) {
    while(CO_endProgram == 0) {
        int ready;
        struct epoll_event ev;

        ready = epoll_wait(rt_thread_epoll_fd, &ev, 1, -1);

        if(ready != 1) {
            if(errno != EINTR) {
                CO_error(0x12100000L + errno);
            }
        }
        else if(CANrx_taskTmr_process(ev.data.fd)) {
            // code was processed in the above function. Additional code process below
            INCREMENT_1MS(CO_timer1ms);

            // Monitor variables with trace objects
            CO_time_process(&CO_time);

#if CO_NO_TRACE > 0
            for(int i=0; i<OD_traceEnable && i<CO_NO_TRACE; i++) {
                CO_trace_process(CO->trace[i], *CO_time.epochTimeOffsetMs);
            }
#endif

            // Detect timer large overflow
            if(OD_performance[ODA_performance_timerCycleMaxTime] > TMR_TASK_OVERFLOW_US && rtPriority > 0 && CO->CANmodule[0]->CANnormal) {
                CO_errorReport(CO->em, CO_EM_ISR_TIMER_OVERFLOW, CO_EMC_SOFTWARE_INTERNAL, 0x22400000L | OD_performance[ODA_performance_timerCycleMaxTime]);
            }
        }
        else {
            // No file descriptor was processed.
            CO_error(0x12200000L);
        }
    }

    return NULL;
}

#ifdef SYSTEMD_DBUS_APP_OFF
static void*
systemd_thread(void* arg) {
    systemd_dbus_main();
    return NULL;
}
#endif


#ifdef LINUX_UPDATER_DBUS_APP
static void*
linux_updater_thread(void* arg) {
    linux_updater_dbus_main();
    return NULL;
}
#endif


#ifdef MAIN_PROCESS_DBUS_APP
static void*
main_process_thread(void* arg) {
    main_process_dbus_main();
    return NULL;
}
#endif
