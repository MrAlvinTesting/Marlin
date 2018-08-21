/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Arduino Mega or Due with RAMPS_17 pin assignments
 *
 * Applies to the following boards:
 *
 *  RAMPS17_DUE_EFB (Hotend, Fan, Bed)
 *  RAMPS17_DUE_EEB (Hotend0, Hotend1, Bed)
 *  RAMPS17_DUE_EFF (Hotend, Fan0, Fan1)
 *  RAMPS17_DUE_EEF (Hotend0, Hotend1, Fan)
 *  RAMPS17_DUE_SF  (Spindle, Controller Fan)
 *
 *  Differences between
 *  RAMPS_14 | RAMPS_17
 *         ? | ?
 *      many | many
 */

#if !defined(__SAM3X8E__) 
  #error "Oops!  Make sure you have 'Arduino Due' selected from the 'Tools -> Boards' menu."
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME       "RAMPS 1.7 DUE"
#endif

#define IS_RAMPS_17_DUE
#define IS_RAMPS_17

#include "pins_RAMPS_17.h"


// I2C EEPROM with 8K of space
#define I2C_EEPROM
#define E2END 0x1FFF

