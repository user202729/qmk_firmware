/* Copyright 2023 Andrew Hess <handrew@duck.com> */

#include QMK_KEYBOARD_H
#include "keymap_steno.h"

// Layer IDs.
#define LAYER_MAIN         0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LAYER_MAIN] = LAYOUT(
        KC_3, KC_Q,  KC_W,  KC_E,  KC_R,              KC_U,  KC_I,  KC_O,  KC_P,    KC_LBRC,
        KC_4, KC_A,  KC_S,  KC_D,  KC_F,  KC_1, KC_H, KC_J,  KC_K,  KC_L,  KC_SCLN, KC_QUOT,
                                KC_C,   KC_V,   KC_N,   KC_M
    ),
};
