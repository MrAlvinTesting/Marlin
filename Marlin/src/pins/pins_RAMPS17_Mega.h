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
 * Arduino Mega with RAMPS v1.7 pin assignments
 *
 * Applies to the following boards:
 *
 *  RAMPS_17_EFB (Extruder, Fan, Bed)
 *  RAMPS_17_EEB (Extruder, Extruder, Bed)
 *  RAMPS_17_EFF (Extruder, Fan, Fan)
 *  RAMPS_17_EEF (Extruder, Extruder, Fan)
 *  RAMPS_17_SF  (Spindle, Controller Fan)
 *
 */

#ifndef BOARD_NAME
  #define BOARD_NAME "RAMPS 1.7 Mega"
#endif

#define IS_RAMPS_17
#include "pins_RAMPS_17.h"
