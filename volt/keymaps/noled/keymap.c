#include QMK_KEYBOARD_H

enum layers {
    DEFAULT,
    SUPER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [DEFAULT] = LAYOUT(
                   KC_T, KC_D, KC_F, KC_G, KC_H, KC_C, KC_B), 
		

    [SUPER] = LAYOUT(
                 KC_TRNS, RGB_MOD, RGB_HUI, RGB_HUD, RGB_TOG, RGB_VAI, RGB_VAD),

};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_MS_LEFT);
        } else {
            tap_code(KC_MS_RIGHT);
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_MS_U);
        } else {
            tap_code(KC_MS_D);
        }
    }
}

