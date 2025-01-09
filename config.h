#pragma once

#include "config_common.h"

#define MATRIX_ROWS 10
#define MATRIX_COLS 6

/* Split Keyboard specific options */
#define MASTER_LEFT
#define SPLIT_USB_DETECT
#define SPLIT_TRANSPORT serial

/* Matrix ayarları */
#define DIODE_DIRECTION COL2ROW
#define DEBOUNCE 5

/* Debug için */
#define DEBUG_MATRIX_SCAN_RATE
#define DEBUG_SPLIT
#define DEBUG_MATRIX
#define DEBUG_KEYBOARD
#define VERBOSE

// Force debug mode
#define DEBUG_MATRIX_KEYS
#define PRINT_MATRIX_KEYS
