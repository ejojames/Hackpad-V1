#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_P7, KC_P8, KC_P9,
        KC_P4, KC_P5, KC_P6,
        KC_MUTE, KC_MPLY
    )
};

#if defined(ENCODER_ENABLE)
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
    return true;
}
#endif

#if defined(OLED_ENABLE)
bool oled_task_user(void) {
    oled_write_P(PSTR("HACKPAD V1\n"), false);
    return false;
}
#endif