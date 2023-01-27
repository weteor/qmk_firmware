#include QMK_KEYBOARD_H

#define ZSHIFT MT(MOD_LSFT, KC_Z)

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum layer_names {
  _QWERTY,
  _BLANK
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  DVORAK
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT(
   KC_ESC,                                                                                                              QK_BOOT,
            KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_NO,   KC_BSPC, 
   KC_TAB,                                                                                                              KC_ENT,
             KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          
   KC_CAPS,
              ZSHIFT,  KC_X,    KC_C,    KC_V,    KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,         
   KC_4,                                                                                                       KC_UP,
               KC_BSPC, KC_LCTL, XXXXXXX, XXXXXXX, KC_SPC, XXXXXXX, XXXXXXX, KC_MINS,                  
   KC_5,                                                                                              KC_LEFT, KC_DOWN, KC_RIGHT
),

[_BLANK] = LAYOUT(
   _______,                                                                                                              _______,
            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
   _______,                                                                                                              _______,
             _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          
   _______,
              _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______,
   _______,
               _______, _______, _______, _______, _______, _______, _______, _______,                  
   _______,                                                                                               _______, _______, _______
)
};


bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
      tap_code16(S(KC_VOLD));
    } else {
      tap_code16(KC_VOLU);
    }
    return true;
};
