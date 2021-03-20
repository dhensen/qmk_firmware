#include QMK_KEYBOARD_H

#define L0 0
#define L1 1
#define L2 2
#define L3 3
// TODO: create layer 3


#define L2_ESC LT(L2, KC_ESC)
#define L2_LEFT LT(L2, KC_LEFT)
#define L1_DOWN LT(L1, KC_DOWN)
#define RCTL_RGHT RCTL_T(KC_RGHT)
#define RSFT_UP RSFT_T(KC_UP)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[L0] = LAYOUT(
		KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_NO, KC_BSPC,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
		L2_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_UP, KC_NO,
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, KC_RALT, L2_LEFT, KC_NO, L1_DOWN, RCTL_RGHT
	),

	[L1] = LAYOUT(
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_DEL,
		KC_TRNS, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,
		KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BL_DEC, BL_TOGG, BL_INC, BL_BRTG, KC_TRNS, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_AUDIO_MUTE, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),
// KC_WH_U, KC_MS_U, KC_WH_D, KC_ACL0
// KC_MS_L, KC_MS_D, KC_MS_R, KC_ACL1
// KC_LSFT, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2, KC_ACL1
	[L2] = LAYOUT(
		M(0), M(1), M(2), M(3), M(4), M(5), M(6), M(7), M(8), M(9), M(10), M(11), M(12), KC_TRNS, KC_TRNS,
		KC_TRNS, KC_WH_U, KC_MS_U, KC_WH_D, KC_ACL0, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_ACL1, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_LSFT, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2, KC_ACL1, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_TRNS, KC_PGDN, KC_END
	),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case M(1):
                // PyCharm Debug program: Alt + Shift + F9 (Some program blocks F10 for run program...)
                SEND_STRING(SS_DOWN(X_LALT) SS_DOWN(X_LSHIFT) SS_TAP(X_F9) SS_UP(X_LSHIFT) SS_UP(X_LALT));
                break;
            case M(9):
                SEND_STRING("bar");
                break;
            case M(10):
                SEND_STRING("foo");
                break;
        }
    }
    return true;
};
