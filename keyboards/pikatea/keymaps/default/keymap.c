/* Copyright 2020 Pikatea Company
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* LAYER 0
 * ,---------------------------------------,
 * |   1   |   2   |   3   |   4   |   5   |  Knob
 * '---------------------------------------'
 */
[0] = LAYOUT(
  KC_NO,       KC_NO,      KC_MEDIA_PREV_TRACK,       KC_MEDIA_PLAY_PAUSE,      KC_MEDIA_NEXT_TRACK
),
[1] = LAYOUT(
  KC_NO,       KC_NO,      KC_NO,       KC_NO,      KC_NO
),

};

void encoder_update_user(uint8_t index, bool clockwise) {
	if (clockwise) {
		tap_code(KC_VOLU);
	} else {
		tap_code(KC_VOLD);
	}
}


