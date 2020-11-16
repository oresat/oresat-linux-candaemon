/*
 * CANopen main program file for Linux SocketCAN.
 *
 * @file        main.c
 * @author      Janez Paternoster
 * @copyright   2015 - 2020 Janez Paternoster
 *
 * This file is part of CANopenSocket, a Linux implementation of CANopen
 * stack with master functionality. Project home page is
 * <https://github.com/CANopenNode/CANopenSocket>. CANopenSocket is based
 * on CANopenNode: <https://github.com/CANopenNode/CANopenNode>.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include <errno.h>
#include <sys/epoll.h>
#include <net/if.h>
#include <linux/reboot.h>
#include <sys/reboot.h>
#include <errno.h>
#include <linux/reboot.h>
#include <net/if.h>
#include <pthread.h>
#include <sched.h>
#include <signal.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/epoll.h>
#include <sys/reboot.h>
#include <sys/stat.h>
#include <unistd.h>

#include "CANopen.h"
#include "CO_error.h"
#include "CO_Linux_threads.h"

#include "daemon_manager.h"
#include "dbus_controller.h"
#include "CO_fread.h"
#include "CO_fwrite.h"
#include "log_message.h"
#include "OD_helpers.h"

#ifdef USE_OD_STORAGE
#include "CO_OD_storage.h"
#endif

/* Add trace functionality for recording variables over time */
#if CO_NO_TRACE > 0
#include "CO_time_trace.h"
#endif

/* Use DS309-3 standard - ASCII command interface to CANopen: NMT master,
 * LSS master and SDO client */
#if (CO_CONFIG_GTW) & CO_CONFIG_GTW_ASCII
#include "309/CO_gateway_ascii.h"
#endif

/* Interval of mainline and real-time thread in microseconds */
#ifndef MAIN_THREAD_INTERVAL_US
#define MAIN_THREAD_INTERVAL_US 100000
#endif
#ifndef TMR_THREAD_INTERVAL_US
#define TMR_THREAD_INTERVAL_US 1000
#endif

// pid file for daemon
#define DEFAULT_PID_FILE        "/run/oresat-candaemon.pid"


/* Other variables and objects */
static int                  rtPriority = -1;    /* Real time priority, configurable by arguments. (-1=RT disabled) */
static int                  CO_ownNodeId = -1;  /* Use value from Object Dictionary or set to 1..127 by arguments */
#ifdef USE_OD_STORAGE
static CO_OD_storage_t      odStor;             /* Object Dictionary storage object for CO_OD_ROM */
static CO_OD_storage_t      odStorAuto;         /* Object Dictionary storage object for CO_OD_EEPROM */
static char                *odStorFile_rom    = "od_storage";       /* Name of the file */
static char                *odStorFile_eeprom = "od_storage_auto";  /* Name of the file */
#endif
#if CO_NO_TRACE > 0
static CO_time_t            CO_time;            /* Object for current time */
#endif

/* Helper functions ***********************************************************/
/* Realtime thread */
static void* rt_thread(void* arg);

/* candaemon apps thread */
static void*                dbus_thread(void* arg);
static pthread_t            dbus_thread_id;

/* make daemon */
int make_daemon();

/* Signal handler */
volatile sig_atomic_t CO_endProgram = 0;
static void sigHandler(int sig) {
    CO_endProgram = 1;
    // kill this thread as it may be wait for a interupt to wake up
    pthread_cancel(dbus_thread_id);
}

/* callback for emergency messages */
static void EmergencyRxCallback(const uint16_t ident,
                                const uint16_t errorCode,
                                const uint8_t errorRegister,
                                const uint8_t errorBit,
                                const uint32_t infoCode)
{
    int16_t nodeIdRx = ident ? (ident&0x7F) : CO_ownNodeId;

    log_printf(LOG_NOTICE, DBG_EMERGENCY_RX, nodeIdRx, errorCode,
               errorRegister, errorBit, infoCode);
}

/* return string description of NMT state. */
static char *NmtState2Str(CO_NMT_internalState_t state)
{
    switch(state) {
        case CO_NMT_INITIALIZING:    return "initializing";
        case CO_NMT_PRE_OPERATIONAL: return "pre-operational";
        case CO_NMT_OPERATIONAL:     return "operational";
        case CO_NMT_STOPPED:         return "stopped";
        default:                     return "unknown";
    }
}

/* callback for NMT change messages */
static void NmtChangedCallback(CO_NMT_internalState_t state)
{
    log_printf(LOG_NOTICE, DBG_NMT_CHANGE, NmtState2Str(state), state);
}

/* callback for monitoring Heartbeat remote NMT state change */
static void HeartbeatNmtChangedCallback(uint8_t nodeId,
                                        CO_NMT_internalState_t state,
                                        void *object)
{
    log_printf(LOG_NOTICE, DBG_HB_CONS_NMT_CHANGE,
               nodeId, NmtState2Str(state), state);
}

/* Print usage */
static void printUsage(char *progName) {
printf(
"Usage: %s <CAN device name> [options]\n", progName);
printf(
"\n"
"Options:\n"
"  -i <Node ID>        CANopen Node-id (1..127). If not specified, value from\n"
"                      Object dictionary (0x2101) is used.\n"
"  -p <RT priority>    Real-time priority of RT thread (1 .. 99). If not set or\n"
"                      set to -1, then normal scheduler is used for RT thread.\n"
"  -r                  Enable reboot on CANopen NMT reset_node command. \n"
"  -d                  Run the process as a daemon");
#ifdef USE_OD_STORAGE
printf(
"  -s <ODstorage file> Set Filename for OD storage ('od_storage' is default).\n"
"  -a <ODstorageAuto>  Set Filename for automatic storage variables from\n"
"                      Object dictionary. ('od_storage_auto' is default).\n");
#endif
#if (CO_CONFIG_GTW) & CO_CONFIG_GTW_ASCII
printf(
"  -c <interface>      Enable command interface for master functionality.\n"
"                      One of three types of interfaces can be specified as:\n"
"                   1. \"stdio\" - Standard IO of a program (terminal).\n"
"                   2. \"local-<file path>\" - Local socket interface on file\n"
"                      path, for example \"local-/tmp/CO_command_socket\".\n"
"                   3. \"tcp-<port>\" - Tcp socket interface on specified \n"
"                      port, for example \"tcp-60000\".\n"
"                      Note that this option may affect security of the CAN.\n"
"  -T <timeout_time>   If -c is specified as local or tcp socket, then this\n"
"                      parameter specifies socket timeout time in milliseconds.\n"
"                      Default is 0 - no timeout on established connection.\n");
#endif
}


/*******************************************************************************
 * Mainline thread
 ******************************************************************************/
int main (int argc, char *argv[]) {
    pthread_t rt_thread_id;
    CO_NMT_reset_cmd_t reset = CO_RESET_NOT;
    CO_ReturnError_t err;
#ifdef USE_OD_STORAGE
    CO_ReturnError_t odStorStatus_rom, odStorStatus_eeprom;
#endif
    intptr_t CANdevice0Index = 0;
    int opt;
    bool_t firstRun = true;

    char* CANdevice = NULL;         /* CAN device, configurable by arguments. */
    bool_t nodeIdFromArgs = false;  /* True, if program arguments are used for CANopen Node Id */
    bool_t rebootEnable = false;    /* Configurable by arguments */
#if (CO_CONFIG_GTW) & CO_CONFIG_GTW_ASCII
    /* values from CO_commandInterface_t */
    int32_t commandInterface = CO_COMMAND_IF_DISABLED;
    /* local socket path if commandInterface == CO_COMMAND_IF_LOCAL_SOCKET */
    char *localSocketPath = NULL;
    uint32_t socketTimeout_ms = 0;
#else
    #define commandInterface 0
    #define localSocketPath NULL
#endif

    bool daemon_flag = false;

    /* configure system log */
    setlogmask(LOG_UPTO (LOG_DEBUG)); /* LOG_DEBUG - log all messages */
    openlog(argv[0], LOG_PID | LOG_PERROR, LOG_USER); /* print also to standard error */

    /* Get program options */
    if(argc < 2 || strcmp(argv[1], "--help") == 0){
        printUsage(argv[0]);
        exit(EXIT_SUCCESS);
    }
    while((opt = getopt(argc, argv, "i:p:rdc:T:s:a:")) != -1) {
        const char comm_stdio[] = "stdio";
        const char comm_local[] = "local-";
        const char comm_tcp[] = "tcp-";
        switch (opt) {
            case 'i':
                CO_ownNodeId = strtol(optarg, NULL, 0);
                nodeIdFromArgs = true;
                break;
            case 'p': rtPriority = strtol(optarg, NULL, 0);
                break;
            case 'r': rebootEnable = true;
                break;
            case 'd':
                daemon_flag = true;
                break;
#if (CO_CONFIG_GTW) & CO_CONFIG_GTW_ASCII
            case 'c':
                if (strcmp(optarg, comm_stdio) == 0) {
                    commandInterface = CO_COMMAND_IF_STDIO;
                }
                else if (strncmp(optarg, comm_local, strlen(comm_local)) == 0) {
                    commandInterface = CO_COMMAND_IF_LOCAL_SOCKET;
                    localSocketPath = &optarg[6];
                }
                else if (strncmp(optarg, comm_tcp, strlen(comm_tcp)) == 0) {
                    const char *portStr = &optarg[4];
                    uint16_t port;
                    int nMatch = sscanf(portStr, "%hu", &port);
                    if(nMatch != 1) {
                        log_printf(LOG_CRIT, DBG_NOT_TCP_PORT, portStr);
                        exit(EXIT_FAILURE);
                    }
                    commandInterface = port;
                }
                else {
                    log_printf(LOG_CRIT, DBG_ARGUMENT_UNKNOWN, "-c", optarg);
                    exit(EXIT_FAILURE);
                }
                break;
            case 'T':
                socketTimeout_ms = strtoul(optarg, NULL, 0);
                break;
#endif
#ifdef USE_OD_STORAGE
            case 's': odStorFile_rom = optarg;
                break;
            case 'a': odStorFile_eeprom = optarg;
                break;
#endif
            default:
                printUsage(argv[0]);
                exit(EXIT_FAILURE);
        }
    }

    if(optind < argc) {
        CANdevice = argv[optind];
        CANdevice0Index = if_nametoindex(CANdevice);
    }

    if(nodeIdFromArgs && (CO_ownNodeId < 1 || CO_ownNodeId > 127)) {
        log_printf(LOG_CRIT, DBG_WRONG_NODE_ID, CO_ownNodeId);
        printUsage(argv[0]);
        exit(EXIT_FAILURE);
    }

    if(rtPriority != -1 && (rtPriority < sched_get_priority_min(SCHED_FIFO)
                         || rtPriority > sched_get_priority_max(SCHED_FIFO))) {
        log_printf(LOG_CRIT, DBG_WRONG_PRIORITY, rtPriority);
        printUsage(argv[0]);
        exit(EXIT_FAILURE);
    }

    if(CANdevice0Index == 0) {
        log_printf(LOG_CRIT, DBG_NO_CAN_DEVICE, CANdevice);
        exit(EXIT_FAILURE);
    }

    /* Run as daemon if needed */
    if (daemon_flag) {
        make_daemon();
    }


    log_printf(LOG_INFO, DBG_CAN_OPEN_INFO, CO_ownNodeId, "starting");


    /* Allocate memory for CANopen objects */
    err = CO_new(NULL);
    if (err != CO_ERROR_NO) {
        log_printf(LOG_CRIT, DBG_CAN_OPEN, "CO_new()", err);
        exit(EXIT_FAILURE);
    }


    /* Verify, if OD structures have proper alignment of initial values */
    if(CO_OD_RAM.FirstWord != CO_OD_RAM.LastWord) {
        log_printf(LOG_CRIT, DBG_OBJECT_DICTIONARY, "CO_OD_RAM");
        exit(EXIT_FAILURE);
    }
    if(CO_OD_EEPROM.FirstWord != CO_OD_EEPROM.LastWord) {
        log_printf(LOG_CRIT, DBG_OBJECT_DICTIONARY, "CO_OD_EEPROM");
        exit(EXIT_FAILURE);
    }
    if(CO_OD_ROM.FirstWord != CO_OD_ROM.LastWord) {
        log_printf(LOG_CRIT, DBG_OBJECT_DICTIONARY, "CO_OD_ROM");
        exit(EXIT_FAILURE);
    }


#ifdef USE_OD_STORAGE
    /* initialize Object Dictionary storage */
    odStorStatus_rom = CO_OD_storage_init(&odStor, (uint8_t*) &CO_OD_ROM, sizeof(CO_OD_ROM), odStorFile_rom);
    odStorStatus_eeprom = CO_OD_storage_init(&odStorAuto, (uint8_t*) &CO_OD_EEPROM, sizeof(CO_OD_EEPROM), odStorFile_eeprom);
#endif

    /* Catch signals SIGINT and SIGTERM */
    if(signal(SIGINT, sigHandler) == SIG_ERR) {
        log_printf(LOG_CRIT, DBG_ERRNO, "signal(SIGINT, sigHandler)");
        exit(EXIT_FAILURE);
    }
    if(signal(SIGTERM, sigHandler) == SIG_ERR) {
        log_printf(LOG_CRIT, DBG_ERRNO, "signal(SIGTERM, sigHandler)");
        exit(EXIT_FAILURE);
    }


    while(reset != CO_RESET_APP && reset != CO_RESET_QUIT && CO_endProgram == 0) {
/* CANopen communication reset - initialize CANopen objects *******************/

        log_printf(LOG_INFO, DBG_CAN_OPEN_INFO, CO_ownNodeId, "communication reset");


        /* Wait rt_thread. */
        if(!firstRun) {
            CO_LOCK_OD();
            CO->CANmodule[0]->CANnormal = false;
            CO_UNLOCK_OD();
        }


        /* Enter CAN configuration. */
        CO_CANsetConfigurationMode((void *)CANdevice0Index);


        /* initialize CANopen */
        if(!nodeIdFromArgs) {
            /* use value from Object dictionary, if not set by program arguments */
            CO_ownNodeId = OD_CANNodeID;
        }

        err = CO_CANinit((void *)CANdevice0Index, 0 /* bit rate not used */);
        if(err != CO_ERROR_NO) {
            log_printf(LOG_CRIT, DBG_CAN_OPEN, "CO_CANinit()", err);
            exit(EXIT_FAILURE);
        }

        err = CO_CANopenInit(CO_ownNodeId);
        if(err != CO_ERROR_NO) {
            log_printf(LOG_CRIT, DBG_CAN_OPEN, "CO_CANopenInit()", err);
            exit(EXIT_FAILURE);
        }

        /* initialize part of threadMain and callbacks */
        threadMainWait_init();
        CO_EM_initCallbackRx(CO->em, EmergencyRxCallback);
        CO_NMT_initCallbackChanged(CO->NMT, NmtChangedCallback);
        CO_HBconsumer_initCallbackNmtChanged(CO->HBcons, NULL,
                                             HeartbeatNmtChangedCallback);


#ifdef USE_OD_STORAGE
        /* initialize OD objects 1010 and 1011 and verify errors. */
        CO_OD_configure(CO->SDO[0], OD_H1010_STORE_PARAM_FUNC, CO_ODF_1010, (void*)&odStor, 0, 0U);
        CO_OD_configure(CO->SDO[0], OD_H1011_REST_PARAM_FUNC, CO_ODF_1011, (void*)&odStor, 0, 0U);
        if(odStorStatus_rom != CO_ERROR_NO) {
            CO_errorReport(CO->em, CO_EM_NON_VOLATILE_MEMORY, CO_EMC_HARDWARE, (uint32_t)odStorStatus_rom);
        }
        if(odStorStatus_eeprom != CO_ERROR_NO) {
            CO_errorReport(CO->em, CO_EM_NON_VOLATILE_MEMORY, CO_EMC_HARDWARE, (uint32_t)odStorStatus_eeprom + 1000);
        }
#endif


#if CO_NO_TRACE > 0
        /* Initialize time */
        CO_time_init(&CO_time, CO->SDO[0], &OD_time.epochTimeBaseMs, &OD_time.epochTimeOffsetMs, 0x2130);
#endif

        /* First time only initialization. */
        if(firstRun) {
            firstRun = false;

            // set up general ODFs
            CO_fread_setup();
            CO_fwrite_setup();
            daemon_manager_setup();

            // setup dbus controller
            dbus_controller_init();

            // setup apps
            dbus_controller_setup_apps();

            /* Init threadMainWait structure and file descriptors */
            threadMainWait_initOnce(MAIN_THREAD_INTERVAL_US, commandInterface,
                                    socketTimeout_ms, localSocketPath);

            /* Init threadRT structure and file descriptors */
            CANrx_threadTmr_init(TMR_THREAD_INTERVAL_US);

            /* Create rt_thread and set priority */
            if(pthread_create(&rt_thread_id, NULL, rt_thread, NULL) != 0) {
                log_printf(LOG_CRIT, DBG_ERRNO, "pthread_create(rt_thread)");
                exit(EXIT_FAILURE);
            }
            if(rtPriority > 0) {
                struct sched_param param;

                param.sched_priority = rtPriority;
                if (pthread_setschedparam(rt_thread_id, SCHED_FIFO, &param) != 0) {
                    log_printf(LOG_CRIT, DBG_ERRNO, "pthread_setschedparam()");
                    exit(EXIT_FAILURE);
                }
            }

            //create app dbus thread
            if(pthread_create(&dbus_thread_id, NULL, dbus_thread, NULL) != 0) {
                log_printf(LOG_CRIT, DBG_ERRNO, "pthread_create(dbus_thread)");
                exit(EXIT_FAILURE);
            }
        } /* if(firstRun) */

        /* start CAN */
        CO_CANsetNormalMode(CO->CANmodule[0]);

        reset = CO_RESET_NOT;

        log_printf(LOG_INFO, DBG_CAN_OPEN_INFO, CO_ownNodeId, "running ...");


        while(reset == CO_RESET_NOT && CO_endProgram == 0) {
/* loop for normal program execution ******************************************/
            threadMainWait_process(&reset);

#ifdef USE_OD_STORAGE
            CO_OD_storage_autoSave(&odStorAuto, timer1usDiff, 60000000);
#endif
        }
    }


/* program exit ***************************************************************/
    // stop app dbus interface
    dbus_controller_end();
    CO_fread_end();
    CO_fwrite_end();

    /* join threads */
    CO_endProgram = 1;
    if (pthread_join(rt_thread_id, NULL) != 0) {
        log_printf(LOG_CRIT, DBG_ERRNO, "pthread_join()");
        exit(EXIT_FAILURE);
    }
    if (pthread_join(dbus_thread_id, NULL) != 0) {
        log_printf(LOG_CRIT, DBG_ERRNO, "pthread_join()");
        exit(EXIT_FAILURE);
    }

#ifdef USE_OD_STORAGE
    /* Store CO_OD_EEPROM */
    CO_OD_storage_autoSave(&odStorAuto, 0, 0);
    CO_OD_storage_autoSaveClose(&odStorAuto);
#endif
    /* delete objects from memory */
    CANrx_threadTmr_close();
    threadMainWait_close();
    CO_delete((void *)CANdevice0Index);

    log_printf(LOG_INFO, DBG_CAN_OPEN_INFO, CO_ownNodeId, "finished");

    /* Flush all buffers (and reboot) */
    if(rebootEnable && reset == CO_RESET_APP) {
        sync();
        if(reboot(LINUX_REBOOT_CMD_RESTART) != 0) {
            log_printf(LOG_CRIT, DBG_ERRNO, "reboot()");
            exit(EXIT_FAILURE);
        }
    }

    exit(EXIT_SUCCESS);
}


/*******************************************************************************
 * Realtime thread for CAN receive and threadTmr
 ******************************************************************************/
static void* rt_thread(void* arg) {

    /* Endless loop */
    while(CO_endProgram == 0) {

        /* function may skip some milliseconds. Number of missed is returned */
        CANrx_threadTmr_process();

#if CO_NO_TRACE > 0
        /* Monitor variables with trace objects */
        CO_time_process(&CO_time);
        for(i=0; i<OD_traceEnable && i<CO_NO_TRACE; i++) {
            CO_trace_process(CO->trace[i], *CO_time.epochTimeOffsetMs);
        }
#endif
    }

    return NULL;
}


static void*
dbus_thread(__attribute__ ((unused)) void* arg) {
    dbus_controller_loop();
    return NULL;
}


int make_daemon(void) {
    char *pid_file = DEFAULT_PID_FILE;
    FILE *run_fp = NULL;
    pid_t pid = 0, sid = 0;

    log_printf(LOG_DEBUG, "Starting as daemon...\n");
    /* Fork */
    if ((pid = fork()) < 0) {
        log_printf(LOG_ERR, "Error: Failed to fork!\n");
        exit(EXIT_FAILURE);
    }

    /* Parent process exits */
    if (pid) {
        exit(EXIT_SUCCESS);
    }

    /* Child process continues on */
    /* Log PID */
    if ((run_fp = fopen(pid_file, "w+")) == NULL) {
        log_printf(LOG_ERR, "Error: Unable to open file %s\n", pid_file);
        exit(EXIT_FAILURE);
    }
    fprintf(run_fp, "%d\n", getpid());
    fflush(run_fp);
    fclose(run_fp);

    /* Create new session for process group leader */
    if ((sid = setsid()) < 0) {
        log_printf(LOG_ERR, "Error: Failed to create new session!\n");
        exit(EXIT_FAILURE);
    }

    /* Set default umask and cd to root to avoid blocking filesystems */
    umask(0);
    if (chdir("/") < 0) {
        log_printf(LOG_ERR, "Error: Failed to chdir to root: %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    /* Redirect std streams to /dev/null */
    if (freopen("/dev/null", "r", stdin) == NULL) {
        log_printf(LOG_ERR, "Error: Failed to redirect streams to /dev/null!\n");
        exit(EXIT_FAILURE);
    }
    if (freopen("/dev/null", "w+", stdout) == NULL) {
        log_printf(LOG_ERR, "Error: Failed to redirect streams to /dev/null!\n");
        exit(EXIT_FAILURE);
    }
    if (freopen("/dev/null", "w+", stderr) == NULL) {
        log_printf(LOG_ERR, "Error: Failed to redirect streams to /dev/null!\n");
        exit(EXIT_FAILURE);
    }

    return 1;
}
