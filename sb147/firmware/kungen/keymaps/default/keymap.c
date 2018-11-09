#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_ESC, LCTL(LALT(KC_DEL)), MO(1), KC_MYCM, LALT(KC_F4), KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_CAPS, RESET, KC_VOLD, KC_VOLU, M(0), KC_F13, KC_F14, KC_MAIL, M(1), 
		LALT(KC_TAB), KC_LEFT, KC_RGHT, KC_F11, KC_ESC, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP, KC_ESC, KC_NLCK, KC_PSLS, KC_PAST, 
		KC_PSCR, M(7), M(5), KC_PGUP, LCTL(KC_B), LCTL(KC_H), KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_DEL, KC_END, KC_PGDN, KC_P7, KC_P8, KC_P9, KC_PMNS, 
		LCTL(LALT(KC_LEFT)), LCTL(LALT(KC_RGHT)), KC_F5, KC_PGDN, LCTL(LALT(KC_LEFT)), LCTL(LALT(KC_RGHT)), KC_LALT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT, KC_UP, KC_P4, KC_P5, KC_P6, KC_PPLS, 
		LCTL(LSFT(KC_TAB)), LCTL(KC_TAB), LCTL(KC_T), KC_UP, LCTL(LSFT(KC_TAB)), LCTL(KC_TAB), KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, MO(1), KC_LEFT, KC_ENT, KC_RGHT, KC_P1, KC_P2, KC_P3, 
		LCTL(KC_D), LCTL(LSFT(KC_T)), LCTL(KC_W), KC_DOWN, KC_SPC, KC_LCTL, KC_LGUI, KC_LALT, KC_TAB, MO(2), KC_SPC, KC_APP, KC_LGUI, KC_MENU, KC_LCTL, KC_DOWN, KC_P0, KC_PDOT, KC_PENT),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		M(4), LALT(KC_LEFT), LALT(KC_RGHT), KC_F, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, M(8), M(6), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, M(2), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		LCTL(KC_Q), KC_TRNS, KC_TRNS, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, M(3), KC_TRNS, KC_TRNS, KC_TRNS)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {

	switch (id) {
		case 0:
			if (record->event.pressed) {
				return MACRO( T(S), T(U), T(D), T(O), T(SPC), T(S), T(U), T(SPC), T(MINS), T(ENT), END );
			}
			break;
		case 1:
			if (record->event.pressed) {
				return MACRO( T(C), T(U), T(R), T(L), T(SPC), T(W), T(T), T(T), T(R), T(DOT), T(I), T(N), T(ENT), END );
			}
			break;
		case 2:
			if (record->event.pressed) {
				return MACRO( T(ESC), D(LSFT), T(SCLN), U(LSFT), D(1), D(ENT), END );
			}
			break;
		case 3:
			if (record->event.pressed) {
				return MACRO( T(ENT), D(LSFT), T(SCLN), T(4), U(LSFT), T(ENT), END );
			}
			break;
		case 4:
			if (record->event.pressed) {
				return MACRO( D(LALT), T(TAB), T(TAB), U(LALT), END );
			}
			break;
		case 5:
			if (record->event.pressed) {
				return MACRO( T(N), T(O), T(T), T(E), T(S), T(ENT), END );
			}
			break;
		case 6:
			if (record->event.pressed) {
				return MACRO( T(V), T(I), T(SPC), D(LSFT), T(GRV), U(LSFT), D(SLSH), D(LSFT), T(D), U(LSFT), T(R), T(O), T(P), T(B), T(O), T(X), D(SLSH), T(T), T(R), T(A), T(N), T(S), T(F), T(I), T(L), T(E), T(ENT), END );
			}
			break;
		case 7:
			if (record->event.pressed) {
				return MACRO( T(S), T(T), T(T), T(Y), T(SPC), T(R), T(O), T(W), T(S), T(SPC), T(8), T(9), T(SPC), T(C), T(O), T(L), T(U), T(M), T(N), T(S), T(SPC), T(2), T(1), T(1), T(ENT), END );
			}
			break;
		case 8:
			if (record->event.pressed) {
				return MACRO( T(S), T(T), T(T), T(Y), T(SPC), T(R), T(O), T(W), T(S), T(SPC), T(7), T(9), T(SPC), T(C), T(O), T(L), T(U), T(M), T(N), T(S), T(SPC), T(2), T(1), T(1), T(ENT), END );
			}
			break;
	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}
