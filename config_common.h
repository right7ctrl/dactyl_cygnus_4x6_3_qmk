#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    "Custom"
#define PRODUCT         "Custom Cygnus"

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

/* Split Keyboard specific options */
#define MASTER_LEFT
#define SPLIT_TRANSPORT serial
#define SOFT_SERIAL_PIN D2

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0 