/* Copyright 2023 Andrew Hess <handrew@duck.com> */

#include QMK_KEYBOARD_H
#include "keymap_steno.h"

// Layer IDs.
#define LAYER_STENO         0

// Layer aliases.
#define STN LAYER_STENO

// Create the actual layers.
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LAYER_STENO] = LAYOUT(
        XXXXXXX, STN_S1,  STN_TL,  STN_PL,  STN_HL,                    STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
        XXXXXXX, STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_NUM, STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
                                            STN_A,   STN_O,   STN_E,   STN_U
    ),

    // A blank layer commented out, just to make adding new layers a little easier.
    // [] = LAYOUT(
    //     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //                                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    // ),
};
