#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xC456
#define DEVICE_VER      0x0001
#define MANUFACTURER    MisonoWorks
#define PRODUCT         Medley
#define DESCRIPTION     4x4 Macropad with OLED

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { F4, F5, B2, B6 }
#define MATRIX_COL_PINS { B3, B1, F7, F6 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define FORCE_NKRO
#define MK_3_SPEED
#define TERMINAL_HELP

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Encoder setup */
#define ENCODERS_PAD_A { B5, E6, C6, D2 }
#define ENCODERS_PAD_B { B4, D7, D4, D3}
#define ENCODER_RESOLUTION 18

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE