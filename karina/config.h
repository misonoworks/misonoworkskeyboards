#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xC456
#define DEVICE_VER      0x0001
#define MANUFACTURER    MisonoWorks
#define PRODUCT         Karina
#define DESCRIPTION     30% keyboard with two encoders, nano!

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 11

/* key matrix pins */
#define MATRIX_ROW_PINS { D2, D3, D5, F0 }
#define MATRIX_COL_PINS { B3, D4, D6, D7, B4, B5, B6, C6, C7, F7, F6}
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define FORCE_NKRO
#define MK_3_SPEED
#define TERMINAL_HELP

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Encoder setup */
#define ENCODERS_PAD_A { B2, F4 }
#define ENCODERS_PAD_B { B1, F5 }
#define ENCODER_RESOLUTION 3

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGB_DI_PIN D1
#ifdef RGB_DI_PIN
#define RGBLED_NUM 19
#define RGBLIGHT_ANIMATIONS
#endif

