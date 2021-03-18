/**
 * Board main for the OreSat Generic board.
 *
 * @file        board_main.c
 * @ingroup     generic
 *
 * This file is part of OreSat Linux Manager, a common CAN to Dbus interface
 * for daemons running on OreSat Linux boards.
 * Project home page is <https://github.com/oresat/oresat-linux-manager>.
 */

#include "CANopen.h"
#include "olm_app.h"
#include "linux_updater_app.h"
#include "linux_updater_odf.h"
#include "board_main.h"
#include <stddef.h>
#include <stdlib.h>

// apps index in list
#define LINUX_UPDATER_APP   0 // linux_updater_app is always 0
#define TOTAL_APPS          LINUX_UPDATER_APP+1

olm_app_t **
board_main(void) {
    olm_app_t **apps;

    if ((apps = malloc((TOTAL_APPS+1) * sizeof(olm_app_t *))) == NULL)
        return apps;

    apps[LINUX_UPDATER_APP] = linux_updater_app_create();
    apps[TOTAL_APPS-1] = NULL; // last app is always NULL

    CO_OD_configure(CO->SDO[0], OD_30F0_linuxUpdaterApp, updater_ODF, NULL, 0, 0U);

    return apps;
}