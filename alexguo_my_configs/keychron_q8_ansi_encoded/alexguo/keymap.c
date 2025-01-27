/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// clang-format off

enum layers{
    MAC_BASE,
    _FN0,
    _FN1,
    _FN2,
    _FN3
};

enum custom_keycods {
    AG_LGOUT = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case AG_LGOUT:
            if (record->event.pressed) {
                // control command q (lock screen)
                SEND_STRING(SS_LCTL(SS_LSFT("q")));
            }
            return false; // Prevent further processing of this keycode
    }
    return true;
}

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_69(
        KC_ESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_MUTE,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          RGB_TOG,
        MO(_FN0),KC_A,     KC_S,     KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,           AG_LGOUT,
        KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, RGB_VAI,
        KC_LOPT, KC_LCTL,  KC_LALT,           KC_LGUI,          MO(_FN1), KC_NO,            KC_SPC,            KC_RCMD,            RGB_MOD, RGB_VAD, RGB_RMOD),

    [_FN0] = LAYOUT_ansi_69(
        KC_GRV,  KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_DEL,           KC_NO,
        KC_NO,   KC_NO,    KC_NO,    KC_VOLU, KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_UP,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_NO,
        KC_NO,   KC_CAPS,  KC_NO,    KC_VOLD, KC_NO,   KC_NO,             KC_NO,   KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO,    KC_NO,    KC_NO,            KC_NO,
        KC_NO,             KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,
        KC_NO,   KC_NO,    KC_NO,             KC_NO,            KC_NO,    KC_NO,            KC_NO,             KC_NO,              KC_NO,   KC_NO,   KC_NO),

    [_FN1] = LAYOUT_ansi_69(
        KC_GRV,  KC_BRID,  KC_BRIU,  KC_NO,   KC_NO,   RM_VALD, RM_VALU,  KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_NO,            RM_TOGG,
        KC_NO,   KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_WH_D,  KC_WH_R, KC_MS_U, KC_WH_L, KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_NO,
        KC_NO,   KC_ACL1,  KC_BTN2,  KC_BTN3, KC_BTN1, KC_ACL2,           KC_WH_U, KC_MS_L, KC_MS_D, KC_MS_R,  KC_NO,    KC_NO,    KC_NO,            KC_NO,
        KC_NO,             KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   NK_TOGG, KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,
        KC_NO,   KC_NO,    KC_NO,             KC_NO,            KC_NO,    KC_NO,            KC_NO,             KC_NO,              KC_NO,   KC_NO,   KC_NO),

    [_FN2] = LAYOUT_ansi_69(
        KC_GRV,  KC_BRID,  KC_BRIU,  KC_TASK, KC_FLXP, RM_VALD, RM_VALU,  KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_NO,            RM_TOGG,
        RM_TOGG, RM_NEXT,  RM_VALU,  RM_HUEU, RM_SATU, RM_SPDU, KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_NO,
        KC_NO,   RM_PREV,  RM_VALD,  RM_HUED, RM_SATD, RM_SPDD,           KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_NO,
        KC_NO,             KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   NK_TOGG, KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,
        KC_NO,   KC_NO,    KC_NO,             KC_NO,            KC_NO,    KC_NO,            KC_NO,             KC_NO,              KC_NO,   KC_NO,   KC_NO),

    [_FN3] = LAYOUT_ansi_69(
        KC_TILD, KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_NO,            KC_NO,
        RM_TOGG, RM_NEXT,  RM_VALU,  RM_HUEU, RM_SATU, RM_SPDU, KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_NO,
        KC_NO,   RM_PREV,  RM_VALD,  RM_HUED, RM_SATD, RM_SPDD,           KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_NO,
        KC_NO,             KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,
        KC_NO,   KC_NO,    KC_NO,             KC_NO,            KC_NO,    KC_NO,            KC_NO,             KC_NO,              KC_NO,   KC_NO,   KC_NO)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_FN0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_FN1]   = {ENCODER_CCW_CW(RM_VALD, RM_VALU)},
    [_FN2]   = {ENCODER_CCW_CW(RM_VALD, RM_VALU)},
    [_FN3]   = {ENCODER_CCW_CW(_______, _______)}
};
#endif // ENCODER_MAP_ENABLE
