#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x2260
#define DEVICE_VER      0x0001
#define MANUFACTURER    KBDFans
#define PRODUCT         DZ60
#define DESCRIPTION     DZ60 Keyboard

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

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { D0, D1, D2, D3, D5 }
#define MATRIX_COL_PINS { F0, F1, E6, C7, C6, B7, D4, B1, B0, B5, B4, D7, D6, B3, F4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
#define BACKLIGHT_PIN B6
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 5
#endif
/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
#define RGB_DI_PIN E2
#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 16
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_SLEEP
#endif
#endif