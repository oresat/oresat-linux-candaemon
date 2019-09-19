/*
 * CANopen Object Dictionary.
 *
 * This file was automatically generated with CANopenNode Object
 * Dictionary Editor. DON'T EDIT THIS FILE MANUALLY !!!!
 * Object Dictionary Editor is currently an older, but functional web
 * application. For more info see See 'Object_Dictionary_Editor/about.html' in
 * <http://sourceforge.net/p/canopennode/code_complete/ci/master/tree/>
 * For more information on CANopen Object Dictionary see <CO_SDO.h>.
 *
 * @file        CO_OD.c/CO_OD.h
 * @author      Janez Paternoster
 * @copyright   2010 - 2016 Janez Paternoster
 *
 * This file is part of CANopenNode, an opensource CANopen Stack.
 * Project home page is <https://github.com/CANopenNode/CANopenNode>.
 * For more information on CANopen see <http://www.can-cia.org/>.
 *
 * CANopenNode is free and open source software: you can redistribute
 * it and/or modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation, either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * Following clarification and special exception to the GNU General Public
 * License is included to the distribution terms of CANopenNode:
 *
 * Linking this library statically or dynamically with other modules is
 * making a combined work based on this library. Thus, the terms and
 * conditions of the GNU General Public License cover the whole combination.
 *
 * As a special exception, the copyright holders of this library give
 * you permission to link this library with independent modules to
 * produce an executable, regardless of the license terms of these
 * independent modules, and to copy and distribute the resulting
 * executable under terms of your choice, provided that you also meet,
 * for each linked independent module, the terms and conditions of the
 * license of that module. An independent module is a module which is
 * not derived from or based on this library. If you modify this
 * library, you may extend this exception to your version of the
 * library, but you are not obliged to do so. If you do not wish
 * to do so, delete this exception statement from your version.
 * Dictionary Editor v0.7-12-g6a8ebda * DON'T EDIT THIS FILE MANUALLY !!!!
 */


#include "CO_driver.h"
#include "CO_OD.h"
#include "CO_SDO.h"


/*******************************************************************************
   DEFINITION AND INITIALIZATION OF OBJECT DICTIONARY VARIABLES
*******************************************************************************/


/***** Definition for ROM variables *******************************************/
struct sCO_OD_ROM CO_OD_ROM = {
           CO_OD_FIRST_LAST_WORD,


           CO_OD_FIRST_LAST_WORD,
};


/***** Definition for RAM variables *******************************************/
struct sCO_OD_RAM CO_OD_RAM = {
           CO_OD_FIRST_LAST_WORD,

/*1000*/ 0x0000L,
/*1001*/ 0x0L,
/*1002*/ 0x0000L,
/*1003*/ {0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1005*/ 0x0080L,
/*1006*/ 0x0000L,
/*1007*/ 0x0000L,
/*1008*/ {'O', 'r', 'e', 'S', 'a', 't', ' ', 'G', 'P', 'S'},
/*1009*/ {'0'},
/*100A*/ {'0'},
/*1010*/ {0x0003L},
/*1011*/ {0x0001L},
/*1014*/ 0x0080L,
/*1015*/ 0x64,
/*1016*/ {0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1017*/ 0x3E8,
/*1018*/ {0x4L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1019*/ 0x0L,
/*1029*/ {0x0L, 0x0L, 0x1L, 0x0L, 0x0L, 0x0L},
/*1200*/ {{0x2L, 0x0600L, 0x0580L}},
/*1280*/ {{0x3L, 0x0000L, 0x0000L, 0x0L}},
/*1400*/ {{0x2L, 0x0200L, 0xFFL},
/*1401*/ {0x2L, 0x0300L, 0xFEL},
/*1402*/ {0x2L, 0x0400L, 0xFEL},
/*1403*/ {0x2L, 0x0500L, 0xFEL},
/*1404*/ {0x2L, 0x80000000L, 0xFEL},
/*1405*/ {0x2L, 0x80000000L, 0xFEL},
/*1406*/ {0x2L, 0x80000000L, 0xFEL},
/*1407*/ {0x2L, 0x80000000L, 0xFEL},
/*1408*/ {0x2L, 0x80000000L, 0xFEL},
/*1409*/ {0x2L, 0x80000000L, 0xFEL},
/*140A*/ {0x2L, 0x80000000L, 0xFEL},
/*140B*/ {0x2L, 0x80000000L, 0xFEL},
/*140C*/ {0x2L, 0x80000000L, 0xFEL},
/*140D*/ {0x2L, 0x80000000L, 0xFEL},
/*140E*/ {0x2L, 0x80000000L, 0xFEL},
/*140F*/ {0x2L, 0x80000000L, 0xFEL}},
/*1600*/ {{0x2L, 0x62000108L, 0x62000208L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1601*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1602*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1603*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1604*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1605*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1606*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1607*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1608*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1609*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*160A*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*160B*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*160C*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*160D*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*160E*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*160F*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L}},
/*1800*/ {{0x6L, 0x0180L, 0xFFL, 0x64, 0x0L, 0x00, 0x0L},
/*1801*/ {0x6L, 0x0280L, 0xFEL, 0x00, 0x0L, 0x00, 0x0L},
/*1802*/ {0x6L, 0x0380L, 0xFEL, 0x00, 0x0L, 0x00, 0x0L},
/*1803*/ {0x6L, 0x0480L, 0xFEL, 0x00, 0x0L, 0x00, 0x0L},
/*1804*/ {0x6L, 0x80000000L, 0xFEL, 0x00, 0x0L, 0x00, 0x0L},
/*1805*/ {0x6L, 0x80000000L, 0xFEL, 0x00, 0x0L, 0x00, 0x0L},
/*1806*/ {0x6L, 0x80000000L, 0xFEL, 0x00, 0x0L, 0x00, 0x0L},
/*1807*/ {0x6L, 0x80000000L, 0xFEL, 0x00, 0x0L, 0x00, 0x0L},
/*1808*/ {0x6L, 0x80000000L, 0xFEL, 0x00, 0x0L, 0x00, 0x0L},
/*1809*/ {0x6L, 0x80000000L, 0xFEL, 0x00, 0x0L, 0x00, 0x0L},
/*180A*/ {0x6L, 0x80000000L, 0xFEL, 0x00, 0x0L, 0x00, 0x0L},
/*180B*/ {0x6L, 0x80000000L, 0xFEL, 0x00, 0x0L, 0x00, 0x0L},
/*180C*/ {0x6L, 0x80000000L, 0xFEL, 0x00, 0x0L, 0x00, 0x0L},
/*180D*/ {0x6L, 0x80000000L, 0xFEL, 0x00, 0x0L, 0x00, 0x0L},
/*180E*/ {0x6L, 0x80000000L, 0xFEL, 0x00, 0x0L, 0x00, 0x0L},
/*180F*/ {0x6L, 0x80000000L, 0xFEL, 0x00, 0x0L, 0x00, 0x0L}},
/*1A00*/ {{0x2L, 0x60000108L, 0x60000208L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1A01*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1A02*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1A03*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1A04*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1A05*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1A06*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1A07*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1A08*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1A09*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1A0A*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1A0B*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1A0C*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1A0D*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1A0E*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*1A0F*/ {0x0L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L}},
/*1F80*/ 0x0000L,
/*2100*/ {0x0L},
/*2101*/ 0x11L,
/*2102*/ 0x3E8,
/*2103*/ 0x00,
/*2104*/ 0x00,
/*2106*/ 0x0000L,
/*2107*/ {0x3E8, 0x00, 0x00, 0x00, 0x00},
/*2108*/ {0x00},
/*2109*/ {0x00},
/*2110*/ {0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*2111*/ {0x0001L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*2112*/ {0x0001L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0x0000L},
/*2120*/ {0x5L, 0x1234567890ABCDEFL, 0x234567890ABCDEF1L, 12.345, 456.789, 0},
/*2130*/ {0x3L, {'-'}, 0x00000000L, 0x0000L},
/*2301*/ {{0x8L, 0x03E8L, 0x0L, {'T', 'r', 'a', 'c', 'e', '1'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*2302*/ {0x8L, 0x03E8L, 0x0L, {'T', 'r', 'a', 'c', 'e', '2'}, {'g', 'r', 'e', 'e', 'n'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*2303*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*2304*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*2305*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*2306*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*2307*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*2308*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*2309*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*230A*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*230B*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*230C*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*230D*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*230E*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*230F*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*2310*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*2311*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*2312*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*2313*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*2314*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*2315*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*2316*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*2317*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*2318*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*2319*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*231A*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*231B*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*231C*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*231D*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*231E*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*231F*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L},
/*2320*/ {0x8L, 0x03E8L, 0x0L, {'n', 'a', 'm', 'e'}, {'r', 'e', 'd'}, 0x0000L, 0x0L, 0x0L, 0x0000L}},
/*2400*/ 0x0L,
/*2401*/ {{0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*2402*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*2403*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*2404*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*2405*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*2406*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*2407*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*2408*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*2409*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*240A*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*240B*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*240C*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*240D*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*240E*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*240F*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*2410*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*2411*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*2412*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*2413*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*2414*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*2415*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*2416*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*2417*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*2418*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*2419*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*241A*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*241B*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*241C*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*241D*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*241E*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*241F*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L},
/*2420*/ {0x6L, 0x0000L, 0x0000L, 0x0000L, 0x0000L, 0, 0x0000L}},
/*3000*/ {0x1L, 0x0000L},
/*3001*/ {0x1L, 0x0000L},
/*3002*/ {0x9L, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
/*3003*/ {0x9L, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
/*6000*/ {0x0L, 0x0L, 0x0L, 0x0L, 0x0L, 0x0L, 0x0L, 0x0L},
/*6200*/ {0x0L, 0x0L, 0x0L, 0x0L, 0x0L, 0x0L, 0x0L, 0x0L},
/*6401*/ {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
/*6411*/ {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

           CO_OD_FIRST_LAST_WORD,
};


/***** Definition for EEPROM variables *******************************************/
struct sCO_OD_EEPROM CO_OD_EEPROM = {
           CO_OD_FIRST_LAST_WORD,


           CO_OD_FIRST_LAST_WORD,
};




/*******************************************************************************
   STRUCTURES FOR RECORD TYPE OBJECTS
*******************************************************************************/


/*0x1018*/ const CO_OD_entryRecord_t OD_record1018[5] = {
           {(void*)&CO_OD_RAM.identity.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.identity.vendorID, 0x86, 0x4 },
           {(void*)&CO_OD_RAM.identity.productCode, 0x86, 0x4 },
           {(void*)&CO_OD_RAM.identity.revisionNumber, 0x86, 0x4 },
           {(void*)&CO_OD_RAM.identity.serialNumber, 0x86, 0x4 },
};

/*0x1200*/ const CO_OD_entryRecord_t OD_record1200[3] = {
           {(void*)&CO_OD_RAM.SDOServerParameter[0].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.SDOServerParameter[0].COB_IDClientToServer, 0x86, 0x4 },
           {(void*)&CO_OD_RAM.SDOServerParameter[0].COB_IDServerToClient, 0x86, 0x4 },
};

/*0x1280*/ const CO_OD_entryRecord_t OD_record1280[4] = {
           {(void*)&CO_OD_RAM.SDOClientParameter[0].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.SDOClientParameter[0].COB_IDClientToServer, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.SDOClientParameter[0].COB_IDServerToClient, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.SDOClientParameter[0].nodeIDOfTheSDOServer, 0x0E, 0x1 },
};

/*0x1400*/ const CO_OD_entryRecord_t OD_record1400[3] = {
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[0].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[0].COB_IDUsedByRPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[0].transmissionType, 0x0E, 0x1 },
};

/*0x1401*/ const CO_OD_entryRecord_t OD_record1401[3] = {
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[1].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[1].COB_IDUsedByRPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[1].transmissionType, 0x0E, 0x1 },
};

/*0x1402*/ const CO_OD_entryRecord_t OD_record1402[3] = {
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[2].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[2].COB_IDUsedByRPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[2].transmissionType, 0x0E, 0x1 },
};

/*0x1403*/ const CO_OD_entryRecord_t OD_record1403[3] = {
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[3].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[3].COB_IDUsedByRPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[3].transmissionType, 0x0E, 0x1 },
};

/*0x1404*/ const CO_OD_entryRecord_t OD_record1404[3] = {
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[4].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[4].COB_IDUsedByRPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[4].transmissionType, 0x0E, 0x1 },
};

/*0x1405*/ const CO_OD_entryRecord_t OD_record1405[3] = {
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[5].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[5].COB_IDUsedByRPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[5].transmissionType, 0x0E, 0x1 },
};

/*0x1406*/ const CO_OD_entryRecord_t OD_record1406[3] = {
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[6].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[6].COB_IDUsedByRPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[6].transmissionType, 0x0E, 0x1 },
};

/*0x1407*/ const CO_OD_entryRecord_t OD_record1407[3] = {
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[7].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[7].COB_IDUsedByRPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[7].transmissionType, 0x0E, 0x1 },
};

/*0x1408*/ const CO_OD_entryRecord_t OD_record1408[3] = {
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[8].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[8].COB_IDUsedByRPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[8].transmissionType, 0x0E, 0x1 },
};

/*0x1409*/ const CO_OD_entryRecord_t OD_record1409[3] = {
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[9].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[9].COB_IDUsedByRPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[9].transmissionType, 0x0E, 0x1 },
};

/*0x140A*/ const CO_OD_entryRecord_t OD_record140A[3] = {
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[10].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[10].COB_IDUsedByRPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[10].transmissionType, 0x0E, 0x1 },
};

/*0x140B*/ const CO_OD_entryRecord_t OD_record140B[3] = {
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[11].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[11].COB_IDUsedByRPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[11].transmissionType, 0x0E, 0x1 },
};

/*0x140C*/ const CO_OD_entryRecord_t OD_record140C[3] = {
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[12].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[12].COB_IDUsedByRPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[12].transmissionType, 0x0E, 0x1 },
};

/*0x140D*/ const CO_OD_entryRecord_t OD_record140D[3] = {
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[13].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[13].COB_IDUsedByRPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[13].transmissionType, 0x0E, 0x1 },
};

/*0x140E*/ const CO_OD_entryRecord_t OD_record140E[3] = {
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[14].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[14].COB_IDUsedByRPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[14].transmissionType, 0x0E, 0x1 },
};

/*0x140F*/ const CO_OD_entryRecord_t OD_record140F[3] = {
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[15].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[15].COB_IDUsedByRPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOCommunicationParameter[15].transmissionType, 0x0E, 0x1 },
};

/*0x1600*/ const CO_OD_entryRecord_t OD_record1600[9] = {
           {(void*)&CO_OD_RAM.RPDOMappingParameter[0].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[0].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[0].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[0].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[0].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[0].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[0].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[0].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[0].mappedObject8, 0x8E, 0x4 },
};

/*0x1601*/ const CO_OD_entryRecord_t OD_record1601[9] = {
           {(void*)&CO_OD_RAM.RPDOMappingParameter[1].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[1].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[1].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[1].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[1].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[1].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[1].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[1].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[1].mappedObject8, 0x8E, 0x4 },
};

/*0x1602*/ const CO_OD_entryRecord_t OD_record1602[9] = {
           {(void*)&CO_OD_RAM.RPDOMappingParameter[2].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[2].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[2].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[2].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[2].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[2].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[2].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[2].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[2].mappedObject8, 0x8E, 0x4 },
};

/*0x1603*/ const CO_OD_entryRecord_t OD_record1603[9] = {
           {(void*)&CO_OD_RAM.RPDOMappingParameter[3].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[3].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[3].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[3].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[3].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[3].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[3].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[3].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[3].mappedObject8, 0x8E, 0x4 },
};

/*0x1604*/ const CO_OD_entryRecord_t OD_record1604[9] = {
           {(void*)&CO_OD_RAM.RPDOMappingParameter[4].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[4].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[4].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[4].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[4].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[4].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[4].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[4].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[4].mappedObject8, 0x8E, 0x4 },
};

/*0x1605*/ const CO_OD_entryRecord_t OD_record1605[9] = {
           {(void*)&CO_OD_RAM.RPDOMappingParameter[5].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[5].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[5].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[5].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[5].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[5].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[5].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[5].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[5].mappedObject8, 0x8E, 0x4 },
};

/*0x1606*/ const CO_OD_entryRecord_t OD_record1606[9] = {
           {(void*)&CO_OD_RAM.RPDOMappingParameter[6].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[6].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[6].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[6].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[6].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[6].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[6].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[6].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[6].mappedObject8, 0x8E, 0x4 },
};

/*0x1607*/ const CO_OD_entryRecord_t OD_record1607[9] = {
           {(void*)&CO_OD_RAM.RPDOMappingParameter[7].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[7].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[7].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[7].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[7].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[7].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[7].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[7].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[7].mappedObject8, 0x8E, 0x4 },
};

/*0x1608*/ const CO_OD_entryRecord_t OD_record1608[9] = {
           {(void*)&CO_OD_RAM.RPDOMappingParameter[8].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[8].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[8].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[8].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[8].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[8].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[8].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[8].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[8].mappedObject8, 0x8E, 0x4 },
};

/*0x1609*/ const CO_OD_entryRecord_t OD_record1609[9] = {
           {(void*)&CO_OD_RAM.RPDOMappingParameter[9].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[9].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[9].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[9].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[9].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[9].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[9].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[9].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[9].mappedObject8, 0x8E, 0x4 },
};

/*0x160A*/ const CO_OD_entryRecord_t OD_record160A[9] = {
           {(void*)&CO_OD_RAM.RPDOMappingParameter[10].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[10].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[10].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[10].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[10].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[10].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[10].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[10].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[10].mappedObject8, 0x8E, 0x4 },
};

/*0x160B*/ const CO_OD_entryRecord_t OD_record160B[9] = {
           {(void*)&CO_OD_RAM.RPDOMappingParameter[11].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[11].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[11].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[11].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[11].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[11].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[11].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[11].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[11].mappedObject8, 0x8E, 0x4 },
};

/*0x160C*/ const CO_OD_entryRecord_t OD_record160C[9] = {
           {(void*)&CO_OD_RAM.RPDOMappingParameter[12].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[12].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[12].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[12].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[12].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[12].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[12].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[12].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[12].mappedObject8, 0x8E, 0x4 },
};

/*0x160D*/ const CO_OD_entryRecord_t OD_record160D[9] = {
           {(void*)&CO_OD_RAM.RPDOMappingParameter[13].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[13].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[13].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[13].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[13].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[13].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[13].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[13].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[13].mappedObject8, 0x8E, 0x4 },
};

/*0x160E*/ const CO_OD_entryRecord_t OD_record160E[9] = {
           {(void*)&CO_OD_RAM.RPDOMappingParameter[14].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[14].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[14].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[14].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[14].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[14].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[14].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[14].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[14].mappedObject8, 0x8E, 0x4 },
};

/*0x160F*/ const CO_OD_entryRecord_t OD_record160F[9] = {
           {(void*)&CO_OD_RAM.RPDOMappingParameter[15].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[15].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[15].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[15].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[15].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[15].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[15].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[15].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.RPDOMappingParameter[15].mappedObject8, 0x8E, 0x4 },
};

/*0x1800*/ const CO_OD_entryRecord_t OD_record1800[7] = {
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[0].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[0].COB_IDUsedByTPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[0].transmissionType, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[0].inhibitTime, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[0].compatibilityEntry, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[0].eventTimer, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[0].SYNCStartValue, 0x0E, 0x1 },
};

/*0x1801*/ const CO_OD_entryRecord_t OD_record1801[7] = {
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[1].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[1].COB_IDUsedByTPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[1].transmissionType, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[1].inhibitTime, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[1].compatibilityEntry, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[1].eventTimer, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[1].SYNCStartValue, 0x0E, 0x1 },
};

/*0x1802*/ const CO_OD_entryRecord_t OD_record1802[7] = {
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[2].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[2].COB_IDUsedByTPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[2].transmissionType, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[2].inhibitTime, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[2].compatibilityEntry, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[2].eventTimer, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[2].SYNCStartValue, 0x0E, 0x1 },
};

/*0x1803*/ const CO_OD_entryRecord_t OD_record1803[7] = {
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[3].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[3].COB_IDUsedByTPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[3].transmissionType, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[3].inhibitTime, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[3].compatibilityEntry, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[3].eventTimer, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[3].SYNCStartValue, 0x0E, 0x1 },
};

/*0x1804*/ const CO_OD_entryRecord_t OD_record1804[7] = {
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[4].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[4].COB_IDUsedByTPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[4].transmissionType, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[4].inhibitTime, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[4].compatibilityEntry, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[4].eventTimer, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[4].SYNCStartValue, 0x0E, 0x1 },
};

/*0x1805*/ const CO_OD_entryRecord_t OD_record1805[7] = {
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[5].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[5].COB_IDUsedByTPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[5].transmissionType, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[5].inhibitTime, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[5].compatibilityEntry, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[5].eventTimer, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[5].SYNCStartValue, 0x0E, 0x1 },
};

/*0x1806*/ const CO_OD_entryRecord_t OD_record1806[7] = {
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[6].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[6].COB_IDUsedByTPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[6].transmissionType, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[6].inhibitTime, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[6].compatibilityEntry, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[6].eventTimer, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[6].SYNCStartValue, 0x0E, 0x1 },
};

/*0x1807*/ const CO_OD_entryRecord_t OD_record1807[7] = {
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[7].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[7].COB_IDUsedByTPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[7].transmissionType, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[7].inhibitTime, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[7].compatibilityEntry, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[7].eventTimer, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[7].SYNCStartValue, 0x0E, 0x1 },
};

/*0x1808*/ const CO_OD_entryRecord_t OD_record1808[7] = {
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[8].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[8].COB_IDUsedByTPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[8].transmissionType, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[8].inhibitTime, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[8].compatibilityEntry, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[8].eventTimer, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[8].SYNCStartValue, 0x0E, 0x1 },
};

/*0x1809*/ const CO_OD_entryRecord_t OD_record1809[7] = {
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[9].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[9].COB_IDUsedByTPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[9].transmissionType, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[9].inhibitTime, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[9].compatibilityEntry, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[9].eventTimer, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[9].SYNCStartValue, 0x0E, 0x1 },
};

/*0x180A*/ const CO_OD_entryRecord_t OD_record180A[7] = {
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[10].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[10].COB_IDUsedByTPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[10].transmissionType, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[10].inhibitTime, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[10].compatibilityEntry, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[10].eventTimer, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[10].SYNCStartValue, 0x0E, 0x1 },
};

/*0x180B*/ const CO_OD_entryRecord_t OD_record180B[7] = {
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[11].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[11].COB_IDUsedByTPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[11].transmissionType, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[11].inhibitTime, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[11].compatibilityEntry, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[11].eventTimer, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[11].SYNCStartValue, 0x0E, 0x1 },
};

/*0x180C*/ const CO_OD_entryRecord_t OD_record180C[7] = {
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[12].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[12].COB_IDUsedByTPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[12].transmissionType, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[12].inhibitTime, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[12].compatibilityEntry, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[12].eventTimer, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[12].SYNCStartValue, 0x0E, 0x1 },
};

/*0x180D*/ const CO_OD_entryRecord_t OD_record180D[7] = {
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[13].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[13].COB_IDUsedByTPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[13].transmissionType, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[13].inhibitTime, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[13].compatibilityEntry, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[13].eventTimer, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[13].SYNCStartValue, 0x0E, 0x1 },
};

/*0x180E*/ const CO_OD_entryRecord_t OD_record180E[7] = {
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[14].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[14].COB_IDUsedByTPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[14].transmissionType, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[14].inhibitTime, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[14].compatibilityEntry, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[14].eventTimer, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[14].SYNCStartValue, 0x0E, 0x1 },
};

/*0x180F*/ const CO_OD_entryRecord_t OD_record180F[7] = {
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[15].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[15].COB_IDUsedByTPDO, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[15].transmissionType, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[15].inhibitTime, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[15].compatibilityEntry, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[15].eventTimer, 0x8E, 0x2 },
           {(void*)&CO_OD_RAM.TPDOCommunicationParameter[15].SYNCStartValue, 0x0E, 0x1 },
};

/*0x1A00*/ const CO_OD_entryRecord_t OD_record1A00[9] = {
           {(void*)&CO_OD_RAM.TPDOMappingParameter[0].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[0].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[0].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[0].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[0].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[0].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[0].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[0].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[0].mappedObject8, 0x8E, 0x4 },
};

/*0x1A01*/ const CO_OD_entryRecord_t OD_record1A01[9] = {
           {(void*)&CO_OD_RAM.TPDOMappingParameter[1].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[1].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[1].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[1].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[1].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[1].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[1].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[1].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[1].mappedObject8, 0x8E, 0x4 },
};

/*0x1A02*/ const CO_OD_entryRecord_t OD_record1A02[9] = {
           {(void*)&CO_OD_RAM.TPDOMappingParameter[2].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[2].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[2].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[2].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[2].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[2].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[2].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[2].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[2].mappedObject8, 0x8E, 0x4 },
};

/*0x1A03*/ const CO_OD_entryRecord_t OD_record1A03[9] = {
           {(void*)&CO_OD_RAM.TPDOMappingParameter[3].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[3].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[3].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[3].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[3].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[3].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[3].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[3].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[3].mappedObject8, 0x8E, 0x4 },
};

/*0x1A04*/ const CO_OD_entryRecord_t OD_record1A04[9] = {
           {(void*)&CO_OD_RAM.TPDOMappingParameter[4].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[4].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[4].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[4].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[4].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[4].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[4].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[4].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[4].mappedObject8, 0x8E, 0x4 },
};

/*0x1A05*/ const CO_OD_entryRecord_t OD_record1A05[9] = {
           {(void*)&CO_OD_RAM.TPDOMappingParameter[5].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[5].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[5].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[5].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[5].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[5].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[5].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[5].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[5].mappedObject8, 0x8E, 0x4 },
};

/*0x1A06*/ const CO_OD_entryRecord_t OD_record1A06[9] = {
           {(void*)&CO_OD_RAM.TPDOMappingParameter[6].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[6].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[6].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[6].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[6].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[6].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[6].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[6].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[6].mappedObject8, 0x8E, 0x4 },
};

/*0x1A07*/ const CO_OD_entryRecord_t OD_record1A07[9] = {
           {(void*)&CO_OD_RAM.TPDOMappingParameter[7].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[7].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[7].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[7].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[7].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[7].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[7].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[7].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[7].mappedObject8, 0x8E, 0x4 },
};

/*0x1A08*/ const CO_OD_entryRecord_t OD_record1A08[9] = {
           {(void*)&CO_OD_RAM.TPDOMappingParameter[8].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[8].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[8].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[8].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[8].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[8].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[8].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[8].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[8].mappedObject8, 0x8E, 0x4 },
};

/*0x1A09*/ const CO_OD_entryRecord_t OD_record1A09[9] = {
           {(void*)&CO_OD_RAM.TPDOMappingParameter[9].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[9].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[9].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[9].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[9].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[9].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[9].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[9].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[9].mappedObject8, 0x8E, 0x4 },
};

/*0x1A0A*/ const CO_OD_entryRecord_t OD_record1A0A[9] = {
           {(void*)&CO_OD_RAM.TPDOMappingParameter[10].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[10].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[10].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[10].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[10].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[10].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[10].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[10].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[10].mappedObject8, 0x8E, 0x4 },
};

/*0x1A0B*/ const CO_OD_entryRecord_t OD_record1A0B[9] = {
           {(void*)&CO_OD_RAM.TPDOMappingParameter[11].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[11].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[11].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[11].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[11].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[11].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[11].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[11].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[11].mappedObject8, 0x8E, 0x4 },
};

/*0x1A0C*/ const CO_OD_entryRecord_t OD_record1A0C[9] = {
           {(void*)&CO_OD_RAM.TPDOMappingParameter[12].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[12].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[12].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[12].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[12].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[12].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[12].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[12].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[12].mappedObject8, 0x8E, 0x4 },
};

/*0x1A0D*/ const CO_OD_entryRecord_t OD_record1A0D[9] = {
           {(void*)&CO_OD_RAM.TPDOMappingParameter[13].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[13].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[13].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[13].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[13].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[13].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[13].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[13].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[13].mappedObject8, 0x8E, 0x4 },
};

/*0x1A0E*/ const CO_OD_entryRecord_t OD_record1A0E[9] = {
           {(void*)&CO_OD_RAM.TPDOMappingParameter[14].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[14].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[14].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[14].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[14].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[14].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[14].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[14].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[14].mappedObject8, 0x8E, 0x4 },
};

/*0x1A0F*/ const CO_OD_entryRecord_t OD_record1A0F[9] = {
           {(void*)&CO_OD_RAM.TPDOMappingParameter[15].numberOfMappedObjects, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[15].mappedObject1, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[15].mappedObject2, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[15].mappedObject3, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[15].mappedObject4, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[15].mappedObject5, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[15].mappedObject6, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[15].mappedObject7, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.TPDOMappingParameter[15].mappedObject8, 0x8E, 0x4 },
};

/*0x2120*/ const CO_OD_entryRecord_t OD_record2120[6] = {
           {(void*)&CO_OD_RAM.testVar.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.testVar.I64, 0x9E, 0x8 },
           {(void*)&CO_OD_RAM.testVar.U64, 0x9E, 0x8 },
           {(void*)&CO_OD_RAM.testVar.R32, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.testVar.R64, 0x9E, 0x8 },
           {(void*)0, 0x0E, 0x0 },
};

/*0x2130*/ const CO_OD_entryRecord_t OD_record2130[4] = {
           {(void*)&CO_OD_RAM.time.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.time.string, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.time.epochTimeBaseMs, 0x86, 0x8 },
           {(void*)&CO_OD_RAM.time.epochTimeOffsetMs, 0x9E, 0x4 },
};

/*0x2301*/ const CO_OD_entryRecord_t OD_record2301[9] = {
           {(void*)&CO_OD_RAM.traceConfig[0].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[0].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[0].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[0].name, 0x0E, 0x6 },
           {(void*)&CO_OD_RAM.traceConfig[0].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[0].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[0].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[0].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[0].threshold, 0x8E, 0x4 },
};

/*0x2302*/ const CO_OD_entryRecord_t OD_record2302[9] = {
           {(void*)&CO_OD_RAM.traceConfig[1].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[1].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[1].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[1].name, 0x0E, 0x6 },
           {(void*)&CO_OD_RAM.traceConfig[1].color, 0x0E, 0x5 },
           {(void*)&CO_OD_RAM.traceConfig[1].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[1].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[1].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[1].threshold, 0x8E, 0x4 },
};

/*0x2303*/ const CO_OD_entryRecord_t OD_record2303[9] = {
           {(void*)&CO_OD_RAM.traceConfig[2].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[2].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[2].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[2].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[2].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[2].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[2].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[2].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[2].threshold, 0x8E, 0x4 },
};

/*0x2304*/ const CO_OD_entryRecord_t OD_record2304[9] = {
           {(void*)&CO_OD_RAM.traceConfig[3].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[3].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[3].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[3].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[3].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[3].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[3].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[3].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[3].threshold, 0x8E, 0x4 },
};

/*0x2305*/ const CO_OD_entryRecord_t OD_record2305[9] = {
           {(void*)&CO_OD_RAM.traceConfig[4].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[4].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[4].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[4].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[4].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[4].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[4].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[4].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[4].threshold, 0x8E, 0x4 },
};

/*0x2306*/ const CO_OD_entryRecord_t OD_record2306[9] = {
           {(void*)&CO_OD_RAM.traceConfig[5].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[5].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[5].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[5].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[5].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[5].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[5].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[5].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[5].threshold, 0x8E, 0x4 },
};

/*0x2307*/ const CO_OD_entryRecord_t OD_record2307[9] = {
           {(void*)&CO_OD_RAM.traceConfig[6].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[6].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[6].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[6].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[6].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[6].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[6].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[6].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[6].threshold, 0x8E, 0x4 },
};

/*0x2308*/ const CO_OD_entryRecord_t OD_record2308[9] = {
           {(void*)&CO_OD_RAM.traceConfig[7].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[7].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[7].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[7].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[7].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[7].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[7].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[7].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[7].threshold, 0x8E, 0x4 },
};

/*0x2309*/ const CO_OD_entryRecord_t OD_record2309[9] = {
           {(void*)&CO_OD_RAM.traceConfig[8].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[8].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[8].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[8].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[8].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[8].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[8].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[8].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[8].threshold, 0x8E, 0x4 },
};

/*0x230A*/ const CO_OD_entryRecord_t OD_record230A[9] = {
           {(void*)&CO_OD_RAM.traceConfig[9].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[9].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[9].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[9].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[9].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[9].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[9].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[9].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[9].threshold, 0x8E, 0x4 },
};

/*0x230B*/ const CO_OD_entryRecord_t OD_record230B[9] = {
           {(void*)&CO_OD_RAM.traceConfig[10].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[10].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[10].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[10].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[10].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[10].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[10].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[10].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[10].threshold, 0x8E, 0x4 },
};

/*0x230C*/ const CO_OD_entryRecord_t OD_record230C[9] = {
           {(void*)&CO_OD_RAM.traceConfig[11].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[11].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[11].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[11].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[11].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[11].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[11].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[11].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[11].threshold, 0x8E, 0x4 },
};

/*0x230D*/ const CO_OD_entryRecord_t OD_record230D[9] = {
           {(void*)&CO_OD_RAM.traceConfig[12].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[12].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[12].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[12].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[12].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[12].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[12].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[12].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[12].threshold, 0x8E, 0x4 },
};

/*0x230E*/ const CO_OD_entryRecord_t OD_record230E[9] = {
           {(void*)&CO_OD_RAM.traceConfig[13].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[13].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[13].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[13].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[13].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[13].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[13].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[13].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[13].threshold, 0x8E, 0x4 },
};

/*0x230F*/ const CO_OD_entryRecord_t OD_record230F[9] = {
           {(void*)&CO_OD_RAM.traceConfig[14].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[14].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[14].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[14].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[14].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[14].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[14].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[14].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[14].threshold, 0x8E, 0x4 },
};

/*0x2310*/ const CO_OD_entryRecord_t OD_record2310[9] = {
           {(void*)&CO_OD_RAM.traceConfig[15].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[15].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[15].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[15].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[15].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[15].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[15].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[15].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[15].threshold, 0x8E, 0x4 },
};

/*0x2311*/ const CO_OD_entryRecord_t OD_record2311[9] = {
           {(void*)&CO_OD_RAM.traceConfig[16].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[16].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[16].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[16].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[16].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[16].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[16].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[16].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[16].threshold, 0x8E, 0x4 },
};

/*0x2312*/ const CO_OD_entryRecord_t OD_record2312[9] = {
           {(void*)&CO_OD_RAM.traceConfig[17].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[17].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[17].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[17].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[17].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[17].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[17].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[17].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[17].threshold, 0x8E, 0x4 },
};

/*0x2313*/ const CO_OD_entryRecord_t OD_record2313[9] = {
           {(void*)&CO_OD_RAM.traceConfig[18].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[18].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[18].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[18].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[18].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[18].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[18].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[18].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[18].threshold, 0x8E, 0x4 },
};

/*0x2314*/ const CO_OD_entryRecord_t OD_record2314[9] = {
           {(void*)&CO_OD_RAM.traceConfig[19].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[19].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[19].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[19].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[19].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[19].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[19].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[19].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[19].threshold, 0x8E, 0x4 },
};

/*0x2315*/ const CO_OD_entryRecord_t OD_record2315[9] = {
           {(void*)&CO_OD_RAM.traceConfig[20].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[20].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[20].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[20].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[20].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[20].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[20].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[20].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[20].threshold, 0x8E, 0x4 },
};

/*0x2316*/ const CO_OD_entryRecord_t OD_record2316[9] = {
           {(void*)&CO_OD_RAM.traceConfig[21].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[21].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[21].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[21].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[21].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[21].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[21].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[21].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[21].threshold, 0x8E, 0x4 },
};

/*0x2317*/ const CO_OD_entryRecord_t OD_record2317[9] = {
           {(void*)&CO_OD_RAM.traceConfig[22].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[22].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[22].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[22].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[22].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[22].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[22].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[22].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[22].threshold, 0x8E, 0x4 },
};

/*0x2318*/ const CO_OD_entryRecord_t OD_record2318[9] = {
           {(void*)&CO_OD_RAM.traceConfig[23].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[23].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[23].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[23].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[23].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[23].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[23].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[23].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[23].threshold, 0x8E, 0x4 },
};

/*0x2319*/ const CO_OD_entryRecord_t OD_record2319[9] = {
           {(void*)&CO_OD_RAM.traceConfig[24].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[24].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[24].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[24].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[24].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[24].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[24].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[24].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[24].threshold, 0x8E, 0x4 },
};

/*0x231A*/ const CO_OD_entryRecord_t OD_record231A[9] = {
           {(void*)&CO_OD_RAM.traceConfig[25].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[25].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[25].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[25].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[25].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[25].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[25].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[25].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[25].threshold, 0x8E, 0x4 },
};

/*0x231B*/ const CO_OD_entryRecord_t OD_record231B[9] = {
           {(void*)&CO_OD_RAM.traceConfig[26].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[26].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[26].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[26].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[26].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[26].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[26].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[26].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[26].threshold, 0x8E, 0x4 },
};

/*0x231C*/ const CO_OD_entryRecord_t OD_record231C[9] = {
           {(void*)&CO_OD_RAM.traceConfig[27].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[27].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[27].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[27].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[27].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[27].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[27].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[27].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[27].threshold, 0x8E, 0x4 },
};

/*0x231D*/ const CO_OD_entryRecord_t OD_record231D[9] = {
           {(void*)&CO_OD_RAM.traceConfig[28].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[28].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[28].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[28].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[28].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[28].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[28].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[28].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[28].threshold, 0x8E, 0x4 },
};

/*0x231E*/ const CO_OD_entryRecord_t OD_record231E[9] = {
           {(void*)&CO_OD_RAM.traceConfig[29].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[29].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[29].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[29].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[29].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[29].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[29].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[29].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[29].threshold, 0x8E, 0x4 },
};

/*0x231F*/ const CO_OD_entryRecord_t OD_record231F[9] = {
           {(void*)&CO_OD_RAM.traceConfig[30].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[30].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[30].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[30].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[30].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[30].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[30].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[30].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[30].threshold, 0x8E, 0x4 },
};

/*0x2320*/ const CO_OD_entryRecord_t OD_record2320[9] = {
           {(void*)&CO_OD_RAM.traceConfig[31].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[31].size, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[31].axisNo, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[31].name, 0x0E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[31].color, 0x0E, 0x3 },
           {(void*)&CO_OD_RAM.traceConfig[31].map, 0x8E, 0x4 },
           {(void*)&CO_OD_RAM.traceConfig[31].format, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[31].trigger, 0x0E, 0x1 },
           {(void*)&CO_OD_RAM.traceConfig[31].threshold, 0x8E, 0x4 },
};

/*0x2401*/ const CO_OD_entryRecord_t OD_record2401[7] = {
           {(void*)&CO_OD_RAM.trace[0].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[0].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[0].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[0].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[0].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[0].triggerTime, 0x9E, 0x4 },
};

/*0x2402*/ const CO_OD_entryRecord_t OD_record2402[7] = {
           {(void*)&CO_OD_RAM.trace[1].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[1].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[1].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[1].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[1].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[1].triggerTime, 0x9E, 0x4 },
};

/*0x2403*/ const CO_OD_entryRecord_t OD_record2403[7] = {
           {(void*)&CO_OD_RAM.trace[2].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[2].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[2].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[2].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[2].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[2].triggerTime, 0x9E, 0x4 },
};

/*0x2404*/ const CO_OD_entryRecord_t OD_record2404[7] = {
           {(void*)&CO_OD_RAM.trace[3].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[3].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[3].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[3].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[3].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[3].triggerTime, 0x9E, 0x4 },
};

/*0x2405*/ const CO_OD_entryRecord_t OD_record2405[7] = {
           {(void*)&CO_OD_RAM.trace[4].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[4].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[4].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[4].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[4].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[4].triggerTime, 0x9E, 0x4 },
};

/*0x2406*/ const CO_OD_entryRecord_t OD_record2406[7] = {
           {(void*)&CO_OD_RAM.trace[5].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[5].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[5].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[5].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[5].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[5].triggerTime, 0x9E, 0x4 },
};

/*0x2407*/ const CO_OD_entryRecord_t OD_record2407[7] = {
           {(void*)&CO_OD_RAM.trace[6].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[6].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[6].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[6].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[6].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[6].triggerTime, 0x9E, 0x4 },
};

/*0x2408*/ const CO_OD_entryRecord_t OD_record2408[7] = {
           {(void*)&CO_OD_RAM.trace[7].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[7].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[7].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[7].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[7].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[7].triggerTime, 0x9E, 0x4 },
};

/*0x2409*/ const CO_OD_entryRecord_t OD_record2409[7] = {
           {(void*)&CO_OD_RAM.trace[8].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[8].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[8].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[8].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[8].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[8].triggerTime, 0x9E, 0x4 },
};

/*0x240A*/ const CO_OD_entryRecord_t OD_record240A[7] = {
           {(void*)&CO_OD_RAM.trace[9].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[9].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[9].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[9].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[9].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[9].triggerTime, 0x9E, 0x4 },
};

/*0x240B*/ const CO_OD_entryRecord_t OD_record240B[7] = {
           {(void*)&CO_OD_RAM.trace[10].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[10].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[10].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[10].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[10].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[10].triggerTime, 0x9E, 0x4 },
};

/*0x240C*/ const CO_OD_entryRecord_t OD_record240C[7] = {
           {(void*)&CO_OD_RAM.trace[11].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[11].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[11].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[11].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[11].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[11].triggerTime, 0x9E, 0x4 },
};

/*0x240D*/ const CO_OD_entryRecord_t OD_record240D[7] = {
           {(void*)&CO_OD_RAM.trace[12].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[12].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[12].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[12].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[12].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[12].triggerTime, 0x9E, 0x4 },
};

/*0x240E*/ const CO_OD_entryRecord_t OD_record240E[7] = {
           {(void*)&CO_OD_RAM.trace[13].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[13].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[13].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[13].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[13].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[13].triggerTime, 0x9E, 0x4 },
};

/*0x240F*/ const CO_OD_entryRecord_t OD_record240F[7] = {
           {(void*)&CO_OD_RAM.trace[14].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[14].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[14].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[14].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[14].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[14].triggerTime, 0x9E, 0x4 },
};

/*0x2410*/ const CO_OD_entryRecord_t OD_record2410[7] = {
           {(void*)&CO_OD_RAM.trace[15].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[15].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[15].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[15].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[15].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[15].triggerTime, 0x9E, 0x4 },
};

/*0x2411*/ const CO_OD_entryRecord_t OD_record2411[7] = {
           {(void*)&CO_OD_RAM.trace[16].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[16].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[16].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[16].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[16].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[16].triggerTime, 0x9E, 0x4 },
};

/*0x2412*/ const CO_OD_entryRecord_t OD_record2412[7] = {
           {(void*)&CO_OD_RAM.trace[17].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[17].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[17].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[17].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[17].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[17].triggerTime, 0x9E, 0x4 },
};

/*0x2413*/ const CO_OD_entryRecord_t OD_record2413[7] = {
           {(void*)&CO_OD_RAM.trace[18].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[18].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[18].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[18].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[18].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[18].triggerTime, 0x9E, 0x4 },
};

/*0x2414*/ const CO_OD_entryRecord_t OD_record2414[7] = {
           {(void*)&CO_OD_RAM.trace[19].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[19].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[19].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[19].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[19].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[19].triggerTime, 0x9E, 0x4 },
};

/*0x2415*/ const CO_OD_entryRecord_t OD_record2415[7] = {
           {(void*)&CO_OD_RAM.trace[20].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[20].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[20].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[20].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[20].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[20].triggerTime, 0x9E, 0x4 },
};

/*0x2416*/ const CO_OD_entryRecord_t OD_record2416[7] = {
           {(void*)&CO_OD_RAM.trace[21].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[21].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[21].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[21].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[21].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[21].triggerTime, 0x9E, 0x4 },
};

/*0x2417*/ const CO_OD_entryRecord_t OD_record2417[7] = {
           {(void*)&CO_OD_RAM.trace[22].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[22].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[22].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[22].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[22].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[22].triggerTime, 0x9E, 0x4 },
};

/*0x2418*/ const CO_OD_entryRecord_t OD_record2418[7] = {
           {(void*)&CO_OD_RAM.trace[23].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[23].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[23].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[23].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[23].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[23].triggerTime, 0x9E, 0x4 },
};

/*0x2419*/ const CO_OD_entryRecord_t OD_record2419[7] = {
           {(void*)&CO_OD_RAM.trace[24].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[24].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[24].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[24].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[24].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[24].triggerTime, 0x9E, 0x4 },
};

/*0x241A*/ const CO_OD_entryRecord_t OD_record241A[7] = {
           {(void*)&CO_OD_RAM.trace[25].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[25].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[25].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[25].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[25].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[25].triggerTime, 0x9E, 0x4 },
};

/*0x241B*/ const CO_OD_entryRecord_t OD_record241B[7] = {
           {(void*)&CO_OD_RAM.trace[26].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[26].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[26].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[26].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[26].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[26].triggerTime, 0x9E, 0x4 },
};

/*0x241C*/ const CO_OD_entryRecord_t OD_record241C[7] = {
           {(void*)&CO_OD_RAM.trace[27].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[27].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[27].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[27].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[27].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[27].triggerTime, 0x9E, 0x4 },
};

/*0x241D*/ const CO_OD_entryRecord_t OD_record241D[7] = {
           {(void*)&CO_OD_RAM.trace[28].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[28].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[28].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[28].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[28].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[28].triggerTime, 0x9E, 0x4 },
};

/*0x241E*/ const CO_OD_entryRecord_t OD_record241E[7] = {
           {(void*)&CO_OD_RAM.trace[29].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[29].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[29].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[29].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[29].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[29].triggerTime, 0x9E, 0x4 },
};

/*0x241F*/ const CO_OD_entryRecord_t OD_record241F[7] = {
           {(void*)&CO_OD_RAM.trace[30].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[30].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[30].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[30].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[30].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[30].triggerTime, 0x9E, 0x4 },
};

/*0x2420*/ const CO_OD_entryRecord_t OD_record2420[7] = {
           {(void*)&CO_OD_RAM.trace[31].maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.trace[31].size, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[31].value, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[31].min, 0x9E, 0x4 },
           {(void*)&CO_OD_RAM.trace[31].max, 0x9E, 0x4 },
           {(void*)0, 0x06, 0x0 },
           {(void*)&CO_OD_RAM.trace[31].triggerTime, 0x9E, 0x4 },
};

/*0x3000*/ const CO_OD_entryRecord_t OD_record3000[2] = {
           {(void*)&CO_OD_RAM.GPS_Status.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.GPS_Status.currentState, 0x8E, 0x4 },
};

/*0x3001*/ const CO_OD_entryRecord_t OD_record3001[2] = {
           {(void*)&CO_OD_RAM.GPS_Control.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.GPS_Control.newState, 0x8E, 0x4 },
};

/*0x3002*/ const CO_OD_entryRecord_t OD_record3002[10] = {
           {(void*)&CO_OD_RAM.GPS_StateVectorGlobal.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.GPS_StateVectorGlobal.positionX, 0xBE, 0x2 },
           {(void*)&CO_OD_RAM.GPS_StateVectorGlobal.positionY, 0xBE, 0x2 },
           {(void*)&CO_OD_RAM.GPS_StateVectorGlobal.positionZ, 0xBE, 0x2 },
           {(void*)&CO_OD_RAM.GPS_StateVectorGlobal.velocityX, 0xBE, 0x2 },
           {(void*)&CO_OD_RAM.GPS_StateVectorGlobal.velocityY, 0xBE, 0x2 },
           {(void*)&CO_OD_RAM.GPS_StateVectorGlobal.velocityZ, 0xBE, 0x2 },
           {(void*)&CO_OD_RAM.GPS_StateVectorGlobal.accelerationX, 0xBE, 0x2 },
           {(void*)&CO_OD_RAM.GPS_StateVectorGlobal.accelerationY, 0xBE, 0x2 },
           {(void*)&CO_OD_RAM.GPS_StateVectorGlobal.accelerationZ, 0xBE, 0x2 },
};

/*0x3003*/ const CO_OD_entryRecord_t OD_record3003[10] = {
           {(void*)&CO_OD_RAM.GPS_StateVector.maxSubIndex, 0x06, 0x1 },
           {(void*)&CO_OD_RAM.GPS_StateVector.positionX, 0xBE, 0x2 },
           {(void*)&CO_OD_RAM.GPS_StateVector.positionY, 0xBE, 0x2 },
           {(void*)&CO_OD_RAM.GPS_StateVector.positionZ, 0xBE, 0x2 },
           {(void*)&CO_OD_RAM.GPS_StateVector.velocityX, 0xBE, 0x2 },
           {(void*)&CO_OD_RAM.GPS_StateVector.velocityZ, 0xBE, 0x2 },
           {(void*)&CO_OD_RAM.GPS_StateVector.velocityY, 0xBE, 0x2 },
           {(void*)&CO_OD_RAM.GPS_StateVector.accelerationX, 0xBE, 0x2 },
           {(void*)&CO_OD_RAM.GPS_StateVector.accelerationY, 0xBE, 0x2 },
           {(void*)&CO_OD_RAM.GPS_StateVector.accelerationZ, 0xBE, 0x2 },
};

/*******************************************************************************
   OBJECT DICTIONARY
*******************************************************************************/
const CO_OD_entry_t CO_OD[CO_OD_NoOfElements] = {
{0x1000, 0x00, 0x86,  4, (void*)&CO_OD_RAM.deviceType},
{0x1001, 0x00, 0x26,  1, (void*)&CO_OD_RAM.errorRegister},
{0x1002, 0x00, 0xA6,  4, (void*)&CO_OD_RAM.manufacturerStatusRegister},
{0x1003, 0x08, 0x8E,  4, (void*)&CO_OD_RAM.preDefinedErrorField[0]},
{0x1005, 0x00, 0x8E,  4, (void*)&CO_OD_RAM.COB_ID_SYNCMessage},
{0x1006, 0x00, 0x8E,  4, (void*)&CO_OD_RAM.communicationCyclePeriod},
{0x1007, 0x00, 0x8E,  4, (void*)&CO_OD_RAM.synchronousWindowLength},
{0x1008, 0x00, 0x06, 10, (void*)&CO_OD_RAM.manufacturerDeviceName},
{0x1009, 0x00, 0x06,  1, (void*)&CO_OD_RAM.manufacturerHardwareVersion},
{0x100A, 0x00, 0x06,  1, (void*)&CO_OD_RAM.manufacturerSoftwareVersion},
{0x1010, 0x01, 0x8E,  4, (void*)&CO_OD_RAM.storeParameters[0]},
{0x1011, 0x01, 0x8E,  4, (void*)&CO_OD_RAM.restoreDefaultParameters[0]},
{0x1014, 0x00, 0x86,  4, (void*)&CO_OD_RAM.COB_ID_EMCY},
{0x1015, 0x00, 0x8E,  2, (void*)&CO_OD_RAM.inhibitTimeEMCY},
{0x1016, 0x04, 0x8E,  4, (void*)&CO_OD_RAM.consumerHeartbeatTime[0]},
{0x1017, 0x00, 0x8E,  2, (void*)&CO_OD_RAM.producerHeartbeatTime},
{0x1018, 0x04, 0x00,  0, (void*)&OD_record1018},
{0x1019, 0x00, 0x0E,  1, (void*)&CO_OD_RAM.synchronousCounterOverflowValue},
{0x1029, 0x06, 0x0E,  1, (void*)&CO_OD_RAM.errorBehavior[0]},
{0x1200, 0x02, 0x00,  0, (void*)&OD_record1200},
{0x1280, 0x03, 0x00,  0, (void*)&OD_record1280},
{0x1400, 0x02, 0x00,  0, (void*)&OD_record1400},
{0x1401, 0x02, 0x00,  0, (void*)&OD_record1401},
{0x1402, 0x02, 0x00,  0, (void*)&OD_record1402},
{0x1403, 0x02, 0x00,  0, (void*)&OD_record1403},
{0x1404, 0x02, 0x00,  0, (void*)&OD_record1404},
{0x1405, 0x02, 0x00,  0, (void*)&OD_record1405},
{0x1406, 0x02, 0x00,  0, (void*)&OD_record1406},
{0x1407, 0x02, 0x00,  0, (void*)&OD_record1407},
{0x1408, 0x02, 0x00,  0, (void*)&OD_record1408},
{0x1409, 0x02, 0x00,  0, (void*)&OD_record1409},
{0x140A, 0x02, 0x00,  0, (void*)&OD_record140A},
{0x140B, 0x02, 0x00,  0, (void*)&OD_record140B},
{0x140C, 0x02, 0x00,  0, (void*)&OD_record140C},
{0x140D, 0x02, 0x00,  0, (void*)&OD_record140D},
{0x140E, 0x02, 0x00,  0, (void*)&OD_record140E},
{0x140F, 0x02, 0x00,  0, (void*)&OD_record140F},
{0x1600, 0x08, 0x00,  0, (void*)&OD_record1600},
{0x1601, 0x08, 0x00,  0, (void*)&OD_record1601},
{0x1602, 0x08, 0x00,  0, (void*)&OD_record1602},
{0x1603, 0x08, 0x00,  0, (void*)&OD_record1603},
{0x1604, 0x08, 0x00,  0, (void*)&OD_record1604},
{0x1605, 0x08, 0x00,  0, (void*)&OD_record1605},
{0x1606, 0x08, 0x00,  0, (void*)&OD_record1606},
{0x1607, 0x08, 0x00,  0, (void*)&OD_record1607},
{0x1608, 0x08, 0x00,  0, (void*)&OD_record1608},
{0x1609, 0x08, 0x00,  0, (void*)&OD_record1609},
{0x160A, 0x08, 0x00,  0, (void*)&OD_record160A},
{0x160B, 0x08, 0x00,  0, (void*)&OD_record160B},
{0x160C, 0x08, 0x00,  0, (void*)&OD_record160C},
{0x160D, 0x08, 0x00,  0, (void*)&OD_record160D},
{0x160E, 0x08, 0x00,  0, (void*)&OD_record160E},
{0x160F, 0x08, 0x00,  0, (void*)&OD_record160F},
{0x1800, 0x06, 0x00,  0, (void*)&OD_record1800},
{0x1801, 0x06, 0x00,  0, (void*)&OD_record1801},
{0x1802, 0x06, 0x00,  0, (void*)&OD_record1802},
{0x1803, 0x06, 0x00,  0, (void*)&OD_record1803},
{0x1804, 0x06, 0x00,  0, (void*)&OD_record1804},
{0x1805, 0x06, 0x00,  0, (void*)&OD_record1805},
{0x1806, 0x06, 0x00,  0, (void*)&OD_record1806},
{0x1807, 0x06, 0x00,  0, (void*)&OD_record1807},
{0x1808, 0x06, 0x00,  0, (void*)&OD_record1808},
{0x1809, 0x06, 0x00,  0, (void*)&OD_record1809},
{0x180A, 0x06, 0x00,  0, (void*)&OD_record180A},
{0x180B, 0x06, 0x00,  0, (void*)&OD_record180B},
{0x180C, 0x06, 0x00,  0, (void*)&OD_record180C},
{0x180D, 0x06, 0x00,  0, (void*)&OD_record180D},
{0x180E, 0x06, 0x00,  0, (void*)&OD_record180E},
{0x180F, 0x06, 0x00,  0, (void*)&OD_record180F},
{0x1A00, 0x08, 0x00,  0, (void*)&OD_record1A00},
{0x1A01, 0x08, 0x00,  0, (void*)&OD_record1A01},
{0x1A02, 0x08, 0x00,  0, (void*)&OD_record1A02},
{0x1A03, 0x08, 0x00,  0, (void*)&OD_record1A03},
{0x1A04, 0x08, 0x00,  0, (void*)&OD_record1A04},
{0x1A05, 0x08, 0x00,  0, (void*)&OD_record1A05},
{0x1A06, 0x08, 0x00,  0, (void*)&OD_record1A06},
{0x1A07, 0x08, 0x00,  0, (void*)&OD_record1A07},
{0x1A08, 0x08, 0x00,  0, (void*)&OD_record1A08},
{0x1A09, 0x08, 0x00,  0, (void*)&OD_record1A09},
{0x1A0A, 0x08, 0x00,  0, (void*)&OD_record1A0A},
{0x1A0B, 0x08, 0x00,  0, (void*)&OD_record1A0B},
{0x1A0C, 0x08, 0x00,  0, (void*)&OD_record1A0C},
{0x1A0D, 0x08, 0x00,  0, (void*)&OD_record1A0D},
{0x1A0E, 0x08, 0x00,  0, (void*)&OD_record1A0E},
{0x1A0F, 0x08, 0x00,  0, (void*)&OD_record1A0F},
{0x1F80, 0x00, 0x8E,  4, (void*)&CO_OD_RAM.NMTStartup},
{0x2100, 0x00, 0x26, 10, (void*)&CO_OD_RAM.errorStatusBits},
{0x2101, 0x00, 0x0E,  1, (void*)&CO_OD_RAM.CANNodeID},
{0x2102, 0x00, 0x8E,  2, (void*)&CO_OD_RAM.CANBitRate},
{0x2103, 0x00, 0x8E,  2, (void*)&CO_OD_RAM.SYNCCounter},
{0x2104, 0x00, 0x86,  2, (void*)&CO_OD_RAM.SYNCTime},
{0x2106, 0x00, 0x86,  4, (void*)&CO_OD_RAM.powerOnCounter},
{0x2107, 0x05, 0x8E,  2, (void*)&CO_OD_RAM.performance[0]},
{0x2108, 0x01, 0x8E,  2, (void*)&CO_OD_RAM.temperature[0]},
{0x2109, 0x01, 0x8E,  2, (void*)&CO_OD_RAM.voltage[0]},
{0x2110, 0x20, 0x8E,  4, (void*)&CO_OD_RAM.variableInt32[0]},
{0x2111, 0x10, 0x8E,  4, (void*)&CO_OD_RAM.variableROM_Int32[0]},
{0x2112, 0x10, 0x8E,  4, (void*)&CO_OD_RAM.variableNV_Int32[0]},
{0x2120, 0x05, 0x00,  0, (void*)&OD_record2120},
{0x2130, 0x03, 0x00,  0, (void*)&OD_record2130},
{0x2301, 0x08, 0x00,  0, (void*)&OD_record2301},
{0x2302, 0x08, 0x00,  0, (void*)&OD_record2302},
{0x2303, 0x08, 0x00,  0, (void*)&OD_record2303},
{0x2304, 0x08, 0x00,  0, (void*)&OD_record2304},
{0x2305, 0x08, 0x00,  0, (void*)&OD_record2305},
{0x2306, 0x08, 0x00,  0, (void*)&OD_record2306},
{0x2307, 0x08, 0x00,  0, (void*)&OD_record2307},
{0x2308, 0x08, 0x00,  0, (void*)&OD_record2308},
{0x2309, 0x08, 0x00,  0, (void*)&OD_record2309},
{0x230A, 0x08, 0x00,  0, (void*)&OD_record230A},
{0x230B, 0x08, 0x00,  0, (void*)&OD_record230B},
{0x230C, 0x08, 0x00,  0, (void*)&OD_record230C},
{0x230D, 0x08, 0x00,  0, (void*)&OD_record230D},
{0x230E, 0x08, 0x00,  0, (void*)&OD_record230E},
{0x230F, 0x08, 0x00,  0, (void*)&OD_record230F},
{0x2310, 0x08, 0x00,  0, (void*)&OD_record2310},
{0x2311, 0x08, 0x00,  0, (void*)&OD_record2311},
{0x2312, 0x08, 0x00,  0, (void*)&OD_record2312},
{0x2313, 0x08, 0x00,  0, (void*)&OD_record2313},
{0x2314, 0x08, 0x00,  0, (void*)&OD_record2314},
{0x2315, 0x08, 0x00,  0, (void*)&OD_record2315},
{0x2316, 0x08, 0x00,  0, (void*)&OD_record2316},
{0x2317, 0x08, 0x00,  0, (void*)&OD_record2317},
{0x2318, 0x08, 0x00,  0, (void*)&OD_record2318},
{0x2319, 0x08, 0x00,  0, (void*)&OD_record2319},
{0x231A, 0x08, 0x00,  0, (void*)&OD_record231A},
{0x231B, 0x08, 0x00,  0, (void*)&OD_record231B},
{0x231C, 0x08, 0x00,  0, (void*)&OD_record231C},
{0x231D, 0x08, 0x00,  0, (void*)&OD_record231D},
{0x231E, 0x08, 0x00,  0, (void*)&OD_record231E},
{0x231F, 0x08, 0x00,  0, (void*)&OD_record231F},
{0x2320, 0x08, 0x00,  0, (void*)&OD_record2320},
{0x2400, 0x00, 0x1E,  1, (void*)&CO_OD_RAM.traceEnable},
{0x2401, 0x06, 0x00,  0, (void*)&OD_record2401},
{0x2402, 0x06, 0x00,  0, (void*)&OD_record2402},
{0x2403, 0x06, 0x00,  0, (void*)&OD_record2403},
{0x2404, 0x06, 0x00,  0, (void*)&OD_record2404},
{0x2405, 0x06, 0x00,  0, (void*)&OD_record2405},
{0x2406, 0x06, 0x00,  0, (void*)&OD_record2406},
{0x2407, 0x06, 0x00,  0, (void*)&OD_record2407},
{0x2408, 0x06, 0x00,  0, (void*)&OD_record2408},
{0x2409, 0x06, 0x00,  0, (void*)&OD_record2409},
{0x240A, 0x06, 0x00,  0, (void*)&OD_record240A},
{0x240B, 0x06, 0x00,  0, (void*)&OD_record240B},
{0x240C, 0x06, 0x00,  0, (void*)&OD_record240C},
{0x240D, 0x06, 0x00,  0, (void*)&OD_record240D},
{0x240E, 0x06, 0x00,  0, (void*)&OD_record240E},
{0x240F, 0x06, 0x00,  0, (void*)&OD_record240F},
{0x2410, 0x06, 0x00,  0, (void*)&OD_record2410},
{0x2411, 0x06, 0x00,  0, (void*)&OD_record2411},
{0x2412, 0x06, 0x00,  0, (void*)&OD_record2412},
{0x2413, 0x06, 0x00,  0, (void*)&OD_record2413},
{0x2414, 0x06, 0x00,  0, (void*)&OD_record2414},
{0x2415, 0x06, 0x00,  0, (void*)&OD_record2415},
{0x2416, 0x06, 0x00,  0, (void*)&OD_record2416},
{0x2417, 0x06, 0x00,  0, (void*)&OD_record2417},
{0x2418, 0x06, 0x00,  0, (void*)&OD_record2418},
{0x2419, 0x06, 0x00,  0, (void*)&OD_record2419},
{0x241A, 0x06, 0x00,  0, (void*)&OD_record241A},
{0x241B, 0x06, 0x00,  0, (void*)&OD_record241B},
{0x241C, 0x06, 0x00,  0, (void*)&OD_record241C},
{0x241D, 0x06, 0x00,  0, (void*)&OD_record241D},
{0x241E, 0x06, 0x00,  0, (void*)&OD_record241E},
{0x241F, 0x06, 0x00,  0, (void*)&OD_record241F},
{0x2420, 0x06, 0x00,  0, (void*)&OD_record2420},
{0x3000, 0x01, 0x00,  0, (void*)&OD_record3000},
{0x3001, 0x01, 0x00,  0, (void*)&OD_record3001},
{0x3002, 0x09, 0x00,  0, (void*)&OD_record3002},
{0x3003, 0x09, 0x00,  0, (void*)&OD_record3003},
{0x6000, 0x08, 0x0E,  1, (void*)&CO_OD_RAM.readInput8Bit[0]},
{0x6200, 0x08, 0x0E,  1, (void*)&CO_OD_RAM.writeOutput8Bit[0]},
{0x6401, 0x0C, 0x8E,  2, (void*)&CO_OD_RAM.readAnalogueInput16Bit[0]},
{0x6411, 0x08, 0x8E,  2, (void*)&CO_OD_RAM.writeAnalogueOutput16Bit[0]},
};
