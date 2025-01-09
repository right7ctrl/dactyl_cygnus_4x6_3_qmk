#include QMK_KEYBOARD_H

enum custom_keycodes {
    SEMICOLON = SAFE_RANGE,
    COLON,    // : için
    AT_SIGN,  // @ için
    PIPE      // | için
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SEMICOLON:
            if (record->event.pressed) {
                SEND_STRING(";");
            }
            return false;
        case COLON:
            if (record->event.pressed) {
                SEND_STRING(":");
            }
            return false;
        case AT_SIGN:
            if (record->event.pressed) {
                SEND_STRING("@");
            }
            return false;
        case PIPE:
            if (record->event.pressed) {
                SEND_STRING("|");
            }
            return false;
        default:
            return true;
    }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_4x6_3(
        // ,-----------------------------------.                    ,-----------------------------------.
        // |   <  |   1  |   2  |   3  |   4  |   5  |           |   6  |   7  |   8  |   9  |   0  |   *  |
           KC_NUBS,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,         KC_6,   KC_7,   KC_8,   KC_9,   KC_0, KC_MINS,
        // |------+------+------+------+------+------|           |------+------+------+------+------+------|
        // | Tab  |   Q  |   W  |   E  |   R  |   T  |           |   Y  |   U  |   U  |   O  |   P  |   Ğ  |
           KC_TAB,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,         KC_Y,   KC_U,   KC_I,   KC_O,   KC_P, KC_LBRC,
        // |------+------+------+------+------+------|           |------+------+------+------+------+------|
        // | Caps |   A  |   S  |   D  |   F  |   G  |           |   H  |   J  |   K  |   L  |   Ş  |   İ  |
           KC_CAPS,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,         KC_H,   KC_J,   KC_K,   KC_L, KC_SCLN, KC_QUOT,
        // |------+------+------+------+------+------|           |------+------+------+------+------+------|
        // |Shift |   Z  |   X  |   C  |   V  |   B  |           |   N  |   M  |   Ö  |   Ç  |   .  |Shift |
           KC_LSFT,  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,         KC_N,   KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        // `-------------+------+------+------|           |------+------+------+-------------'
        //              | Opt  | Cmd  |Space |           |Layer 1 | Bksp |Enter |
                          KC_LALT, KC_LGUI, KC_SPC,       MO(1), KC_BSPC, KC_ENT
        //              `--------------------'           '--------------------'
    ),
    [1] = LAYOUT_split_4x6_3(
        // Özel karakterler katmanı
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_DEL,
        _______, AT_SIGN, KC_UP,   KC_END,  KC_PGUP, COLON,      KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_BSLS, KC_GRV,
        _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, SEMICOLON,  KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_PIPE, KC_TILD,
        _______, KC_VOLD, KC_MUTE, KC_VOLU, PIPE,    _______,    _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_RSFT, _______,
                      KC_BSPC, KC_DEL,  KC_ENT,   KC_SPC,  _______, _______
    )
};
