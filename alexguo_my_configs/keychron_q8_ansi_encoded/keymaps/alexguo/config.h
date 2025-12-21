/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Enable caps-lock LED */
#define CAPS_LOCK_LED_INDEX 30

/* ALEXGUO mouse configuration */
// acl0 base speed, acl1 slow speed, acl2 fast speed
#define MOUSEKEY_DELAY 0 // Reduce delay of mouse key press to movement
#define MOUSEKEY_INTERVAL 16 // for smooth mouse movement
#define MOUSEKEY_TIME_TO_MAX 0 // disabling acceleration
#define MOUSEKEY_WHEEL_TIME_TO_MAX 0 // disabling acceleration for scrolling
#define MK_3_SPEED // define mk3 speed to enable constant mode
#define MK_C_INTERVAL_0 16 // smooth movement for base speed (other layers default to this)
#define MK_C_OFFSET_0 10 // base mouse speed
#define MK_C_OFFSET_1 3 // acl1 speed (slow)
#define MK_C_OFFSET_2 40 // acl2 speed (fast)
#define MK_MOMENTARY_ACCEL // enable momentary acceleration mode