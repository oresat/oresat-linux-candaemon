/**
 * Module for interfacing with the OreSat Star Tracker daemon over D-Bus.
 *
 * @file        star_tracker.c
 * @ingroup     daemon_modules
 *
 * This file is part of OreSat Linux Manager, a common CAN to Dbus interface
 * for daemons running on OreSat Linux boards.
 * Project home page is <https://github.com/oresat/oresat-linux-manager>.
 */

#include "star_tracker.h"
#include "logging.h"
#include "utility.h"
#include <errno.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <systemd/sd-bus.h>

#define MODULE_NAME    "Star Tracker"
#define DESTINATION    "org.OreSat.StarTracker"
#define INTERFACE_NAME "org.OreSat.StarTracker"
#define OBJECT_PATH    "/org/OreSat/StarTracker"

/** System D-Bus connection. Defined in main.c */
extern sd_bus *system_bus;

// lazy way to deal with all the D-Bus arguments
#define DBUS_INFO system_bus, DESTINATION, OBJECT_PATH, INTERFACE_NAME

int
star_tracker_coordinates(st_coordinates_t *coor) {
    sd_bus_error err = SD_BUS_ERROR_NULL;
    sd_bus_message *mess = NULL;
    double time_raw, time_fine, time_coarse;
    int r = 0;

    if (coor == NULL)
        return -EINVAL;

    if ((r = sd_bus_get_property(DBUS_INFO, "Coor", &err, &mess, "(dddd)")) < 0)
        LOG_DBUS_GET_PROPERTY_ERROR(LOG_DEBUG, MODULE_NAME, "Coor", err.name);
    else if ((r = sd_bus_message_read(mess, "(dddd)", &coor->declination,
                                      &coor->right_ascension, &coor->roll,
                                      &time_raw))
             < 0)
        LOG_DBUS_PROPERTY_READ_ERROR(LOG_DEBUG, MODULE_NAME, "Coor", err.name);

    time_fine = modf(time_raw, &time_coarse);

    coor->timestamp.tv_sec = (time_t)time_coarse;
    coor->timestamp.tv_usec = (long)time_fine;

    sd_bus_error_free(&err);
    sd_bus_message_unref(mess);
    return r;
}

int32_t
star_tracker_state(void) {
    sd_bus_error err = SD_BUS_ERROR_NULL;
    sd_bus_message *mess = NULL;
    int32_t state = -1;

    if (sd_bus_get_property(DBUS_INFO, "CurrentState", &err, &mess, "i") < 0)
        LOG_DBUS_GET_PROPERTY_ERROR(LOG_DEBUG, MODULE_NAME, "CurrentState",
                                    err.name);
    else if (sd_bus_message_read(mess, "i", &state) < 0)
        LOG_DBUS_PROPERTY_READ_ERROR(LOG_DEBUG, MODULE_NAME, "CurrentState",
                                     err.name);

    sd_bus_error_free(&err);
    sd_bus_message_unref(mess);
    return state;
}

int
star_tracker_change_state(int32_t new_state) {
    sd_bus_error err = SD_BUS_ERROR_NULL;
    int r;

    if ((r = sd_bus_call_method(DBUS_INFO, "ChangeState", &err, NULL, "i",
                                new_state))
        < 0)
        LOG_DBUS_CALL_METHOD_ERROR(LOG_DEBUG, MODULE_NAME, "ChangeState",
                                   err.name);

    sd_bus_error_free(&err);
    return r;
}

int
star_tracker_capture(void) {
    sd_bus_error err = SD_BUS_ERROR_NULL;
    int r;

    if ((r = sd_bus_call_method(DBUS_INFO, "Capture", &err, NULL, NULL)) < 0)
        LOG_DBUS_CALL_METHOD_ERROR(LOG_DEBUG, MODULE_NAME, "Capture", err.name);

    sd_bus_error_free(&err);
    return r;
}

int
star_tracker_get_capture(char **out) {
    sd_bus_error err = SD_BUS_ERROR_NULL;
    sd_bus_message *mess = NULL;
    char *temp = NULL, *path = NULL;
    int r;

    if ((r = sd_bus_get_property(DBUS_INFO, "CapturePath", &err, &mess, "s"))
        < 0) {
        LOG_DBUS_GET_PROPERTY_ERROR(LOG_DEBUG, MODULE_NAME, "CapturePath",
                                    err.name);
    } else if ((r = sd_bus_message_read(mess, "s", &temp)) < 0) {
        LOG_DBUS_PROPERTY_READ_ERROR(LOG_DEBUG, MODULE_NAME, "CapturePath",
                                     err.name);
    } else if (is_file(temp)) {
        if ((path = malloc(strlen(temp) + 1)) == NULL) {
            r = -ENOMEM;
        } else {
            strncpy(path, temp, strlen(temp) + 1);
            *out = path;
        }
    } else {
        r = -ESRCH;
    }

    sd_bus_message_unref(mess);
    sd_bus_error_free(&err);
    return r;
}

int
star_tracker_get_solve(char **out) {
    sd_bus_error err = SD_BUS_ERROR_NULL;
    sd_bus_message *mess = NULL;
    char *temp = NULL, *path = NULL;
    int r;

    if ((r = sd_bus_get_property(DBUS_INFO, "SolvePath", &err, &mess, "s"))
        < 0) {
        LOG_DBUS_GET_PROPERTY_ERROR(LOG_DEBUG, MODULE_NAME, "SourcePath",
                                    err.name);
    } else if ((r = sd_bus_message_read(mess, "s", &temp)) < 0) {
        LOG_DBUS_PROPERTY_READ_ERROR(LOG_DEBUG, MODULE_NAME, "SolvePath",
                                     err.name);
    } else if (is_file(temp)) {
        if ((path = malloc(strlen(temp) + 1)) == NULL) {
            r = -ENOMEM;
        } else {
            strncpy(path, temp, strlen(temp) + 1);
            *out = path;
        }
    } else {
        r = -ESRCH;
    }

    sd_bus_message_unref(mess);
    sd_bus_error_free(&err);
    return r;
}
