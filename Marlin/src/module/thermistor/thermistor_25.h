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

// R25 = 100 kOhm, 4.7 kOhm pull-up, ATC Semitec 104GT-1  (bed) thermistor
const short temptable_25[][2] PROGMEM = {
  { OV(  17), 280 },
  { OV(  21), 270 },
  { OV(  25), 260 },
  { OV(  29), 250 },
  { OV(  34), 240 },
  { OV(  41), 230 },
  { OV(  49), 220 },
  { OV(  60), 210 },
  { OV(  71), 200 },
  { OV(  88), 190 },
  { OV( 107), 180 },
  { OV( 132), 170 },
  { OV( 166), 160 },
  { OV( 201), 150 },
  { OV( 247), 140 },
  { OV( 297), 130 },
  { OV( 359), 120 },
  { OV( 424), 110 },
  { OV( 509), 100 },
  { OV( 588),  90 },
  { OV( 665),  80 },
  { OV( 740),  70 },
  { OV( 835),  60 },
  { OV( 885),  50 },
  { OV( 928),  40 },
  { OV( 953),  30 },
  { OV( 978),  20 },
  { OV( 984),  10 },
  { OV( 996),   1 },
  { OV(1006),   0 }
};
