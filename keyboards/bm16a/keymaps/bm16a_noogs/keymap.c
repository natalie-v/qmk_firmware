/* Copyright 2019
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
//#define RGB_VAL 16 //Define 16 RGB LEDs

enum custom_keycodes {
	REDO = SAFE_RANGE, 	// M10
	UNDO,				// M9
	ZOOM_OUT,			// M8
	ZOOM_IN,			// M7
	OPEN,				// M2
	COPY,				// M13
	RESET_ZOOM,			// M22
	CLOSE,				// M1
	PASTE,				// M14
	WEB_SAVE,			// M6
	SAVE,				// M0
	LEVELS,				// M4
	COPY_LAYER,			// M23
	SELECT_ALL,			// M12
	DESELECT,			// M3
	FREE_TRANSFORM,		// M16
	FILL,				// M11
	GUIDES,				// M5
	NEW_WINDOW,			// M19
	NEW_TAB,			// M18
	SAVE_AS,			// M15
	QUIT,				// M21 - Doesn't work for Chrome
	PRINT,				// M17
	FIND				// M20
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case REDO:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LSFT) SS_DOWN(X_LGUI) SS_DOWN(X_Z));
			} else {
				SEND_STRING(SS_UP(X_LSFT) SS_UP(X_LGUI) SS_UP(X_Z));
			}
			break;
		case UNDO:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_Z));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_Z));
			}
			break;
		case ZOOM_OUT:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_PMNS));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_PMNS));
			}
			break;
		case ZOOM_IN:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_PPLS));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_PPLS));
			}
			break;
		case OPEN:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_O));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_O));
			}
			break;
		case COPY:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_C));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_C));
			}
			break;
		case RESET_ZOOM:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_0));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_0));
			}
			break;
		case CLOSE:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_W));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_W));
			}
			break;
		case PASTE:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_V));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_V));
			}
			break;
		case WEB_SAVE:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LSFT) SS_DOWN(X_LALT) SS_DOWN(X_LGUI) SS_DOWN(X_S));
			} else {
				SEND_STRING(SS_UP(X_LSFT) SS_UP(X_LALT) SS_UP(X_LGUI) SS_UP(X_S));
			}
			break;
		case SAVE:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_S));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_S));
			}
			break;
		case LEVELS:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_L));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_L));
			}
			break;
		case COPY_LAYER:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_LALT) SS_DOWN(X_LSFT) SS_DOWN(X_E));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_LALT) SS_UP(X_LSFT) SS_UP(X_E));
			}
			break;
		case SELECT_ALL:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_A));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_A));
			}
			break;
		case DESELECT:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_D));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_D));
			}
			break;
		case FREE_TRANSFORM:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_T));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_T));
			}
			break;
		case FILL:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LSFT) SS_DOWN(X_F5));
			} else {
				SEND_STRING(SS_UP(X_LSFT) SS_UP(X_F5));
			}
			break;
		case GUIDES:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_SCLN));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_SCLN));
			}
			break;
		case NEW_WINDOW:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_N));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_N));
			}
			break;
		case NEW_TAB:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_LSFT) SS_DOWN(X_T));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_LSFT) SS_UP(X_T));
			}
			break;
		case SAVE_AS:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_LSFT) SS_DOWN(X_S));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_LSFT) SS_UP(X_S));
			}
			break;
		case QUIT:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_Q));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_Q));
			}
			break;
		case PRINT:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_P));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_P));
			}
			break;
		case FIND:
			if (record->event.pressed)	{
				SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_F));
			} else {
				SEND_STRING(SS_UP(X_LGUI) SS_UP(X_F));
			}
			break;
		}
	return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	// Layer 0 - Base Layer with layer switching toggles for 0, 1, 2, 3
	[0] = LAYOUT_ortho_4x4(
		REDO, UNDO, ZOOM_OUT, ZOOM_IN, 
		OPEN, COPY, RESET_ZOOM, KC_SPC, 
		CLOSE, PASTE, KC_LALT, KC_LSFT, 
		TO(3), TO(2), TO(1), TO(0) 		// Toggle Layer
	),
	
	// Layer 1 - Photoshop and Illustrator Tools
	[1] = LAYOUT_ortho_4x4(
		KC_M, KC_V, KC_LBRC, KC_RBRC, 
		KC_W, KC_O, KC_X, KC_B, 
		KC_J, KC_L, KC_E, KC_C, 
		KC_S, KC_F, KC_TRNS, TO(0) 
	),
	
	// Layer 2 - Photoshop Functions and Actions
	[2] = LAYOUT_ortho_4x4(
		KC_ESC, WEB_SAVE, SAVE, LEVELS, 
		KC_TAB, COPY_LAYER, SELECT_ALL, DESELECT, 
		KC_F15, KC_TRNS, FREE_TRANSFORM, FILL, 
		KC_F14, KC_F13, GUIDES, TO(0) 
	),
	
	// Layer 3 - RGB Controls and Browser Functions
	[3] = LAYOUT_ortho_4x4(
		KC_ESC, NEW_WINDOW, RGB_VAI, RGB_TOG, 
		KC_TAB, NEW_TAB, RGB_VAD, RGB_MOD, 
		SAVE_AS, KC_TRNS, KC_TRNS, QUIT,   
		PRINT, FIND, KC_TRNS, TO(0)
	),
};

void eeconfig_init_user(void)	{ // EEPROM reset
	
	rgblight_enable(); // Enable RGB by default
	rgblight_sethsv_white(); // Set it to WHITE by default
	rgblight_mode(RGBLIGHT_MODE_BREATHING); // Set to breathing by default
}

layer_state_t layer_state_set_user(layer_state_t state)	{
	rgblight_config_t rgblight_config;
		switch(biton32(state))	{
			case 1:
				// Teal
				rgblight_enable_noeeprom();
				rgblight_sethsv_noeeprom(HSV_TEAL);
				break;
			case 2:
				// Purple
				rgblight_enable_noeeprom();
				rgblight_sethsv_noeeprom(HSV_PURPLE);
				break;
			case 3: // Chartreuse
				rgblight_enable_noeeprom();
				rgblight_sethsv_noeeprom(HSV_CHARTREUSE);
				break;
			default: // White
				rgblight_config.raw = eeconfig_read_rgblight(); // Read RGB light state
				if (rgblight_config.enable) {
					rgblight_sethsv_noeeprom(HSV_WHITE);
				} else {
					rgblight_disable_noeeprom(); // Otherwise returns to disabled state
				}
			break;
		}
	return state;
}