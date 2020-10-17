#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xC456
#define DEVICE_VER      0x0001
#define MANUFACTURER    MisonoWorks
#define PRODUCT         Pocket Voltex
#define DESCRIPTION     A small SDVX controller!

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 7

/* key matrix pins */
#define DIRECT_PINS {{ B7, F0, F1, D1, D2, F7, D0 }}
#define UNUSED_PINS

#define ENCODERS_PAD_A { F4, B4 }
#define ENCODERS_PAD_B { F5, D7 }
#define ENCODER_RESOLUTION 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define FORCE_NKRO
#define MK_3_SPEED
#define TERMINAL_HELP

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGB_DI_PIN B5
#ifdef RGB_DI_PIN
#define RGBLED_NUM 7
#define RGBLIGHT_ANIMATIONS
#endif

