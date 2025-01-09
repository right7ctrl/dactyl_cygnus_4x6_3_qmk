#include "custom_cygnus.h"
#include "debug.h"

void keyboard_pre_init_user(void) {
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
    static uint16_t scan_count = 0;
    if (scan_count++ % 1000 == 0) {
        print("Matrix scan!\n");
    }
}

void keyboard_post_init_user(void) {
    debug_enable = true;
    debug_matrix = true;
    print("Keyboard initialized!\n");
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        uprintf("KL: row: %u, col: %u, layer: %u\n", 
                record->event.key.row,
                record->event.key.col,
                get_highest_layer(layer_state));
    }
    return true;
} 