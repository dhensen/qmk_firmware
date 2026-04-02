#include QMK_KEYBOARD_H

#define L0 0
#define L1 1
#define L2 2
#define L3 3
#define L4 4

#define L3_ESC LT(L3, KC_ESC)
#define L3_LEFT LT(L3, KC_LEFT)
#define L2_DOWN LT(L2, KC_DOWN)
#define RCTL_RGHT RCTL_T(KC_RGHT)
#define RSFT_UP RSFT_T(KC_UP)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[L0] = LAYOUT(
		QK_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, XXXXXXX, KC_BSPC,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
		L3_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT, XXXXXXX, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_UP, XXXXXXX,
		KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_SPC, KC_SPC, KC_RALT, L3_LEFT, XXXXXXX, L2_DOWN, RCTL_RGHT
	),

	[L1] = LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, KC_LGUI, KC_LALT, _______, _______, _______, _______, _______, _______, _______, _______
        // swap KC_LALT with KC_LGUI to switch to windows/linux layout
	),

	[L2] = LAYOUT(
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______, KC_DEL,
		_______, UG_TOGG, UG_NEXT, UG_HUEU, UG_HUED, UG_SATU, UG_SATD, UG_VALU, UG_VALD, _______, _______, _______, _______, QK_BOOT,
		KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, BL_DOWN, BL_TOGG, BL_UP, BL_BRTG, _______, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_AUDIO_MUTE, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
	),

	[L3] = LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		TG(L1), MS_WHLU, MS_UP, MS_WHLD, MS_ACL0, _______, _______, _______, _______, _______, KC_PSCR, _______, _______, _______,
		_______, MS_LEFT, MS_DOWN, MS_RGHT, MS_ACL1, _______, _______, _______, _______, _______, _______, _______, _______,
		KC_LSFT, _______, MS_BTN1, MS_BTN3, MS_BTN2, MS_ACL1, _______, _______, _______, _______, _______, _______, KC_PGUP, _______,
		_______, _______, _______, _______, _______, _______, _______, KC_HOME, _______, KC_PGDN, KC_END
	),

};
