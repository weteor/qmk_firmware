
#pragma once
#include QMK_KEYBOARD_H
#if (!defined(LAYOUT) && defined(KEYMAP))
    #define LAYOUT KEYMAP
#endif

#include "oneshot.h"
//#include "g/keymap_combo.h"

#define LAYOUT_crkbd_wrapper(...)   LAYOUT_split_3x6_3(__VA_ARGS__)
#define LAYOUT_3w6_wrapper(...)  LAYOUT_split_3x5_3(__VA_ARGS__)

#define LA_SYM MO(_SYM)
#define LA_NAV MO(_NAV)

#define KC_AUML ALGR(KC_Q)
#define KC_UUML ALGR(KC_Y)
#define KC_OUML ALGR(KC_SCLN)
#define KC_SZET ALGR(KC_S)

enum layers
{
    _ALPHA_COLEMAK = 0,
    _ALPHA_QWERTY,
    _ALPHA_COLEMAK_DH,
    _ALPHA_BEAKL_15,
    _ALPHA_HD,
    _SYM,
    _NAV,
    _NUM,
    _CFG,
};

enum keycodes {
    OS_SHFT = SAFE_RANGE,
    OS_CTRL,
    OS_ALT,
    OS_GUI,
};

//typedef enum {
    //ENDW = SAFE_RANGE,
//}custom_keycodes;

#define _________________QWERTY_L1_________________        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________        KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTY_L3_________________        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B 

#define _________________QWERTY_R1_________________        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _________________QWERTY_R3_________________        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_QUOT

#define _________________COLEMAK_L1________________        KC_Q,    KC_W,    KC_F,    KC_P,    KC_G
#define _________________COLEMAK_L2________________        KC_A,    KC_R,    KC_S,    KC_T,    KC_D
#define _________________COLEMAK_L3________________        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B 

#define _________________COLEMAK_R1________________        KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT
#define _________________COLEMAK_R2________________        KC_H,    KC_N,    KC_E,    KC_I,    KC_O
#define _________________COLEMAK_R3________________        KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SCLN

#define _______________COLEMAK_DH_L1_______________        KC_Q,    KC_W,    KC_F,    KC_P,    KC_B
#define _______________COLEMAK_DH_L2_______________        KC_A,    KC_R,    KC_S,    KC_T,    KC_G
#define _______________COLEMAK_DH_L3_______________        KC_Z,    KC_X,    KC_C,    KC_D,    KC_V 

#define _______________COLEMAK_DH_R1_______________        KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT
#define _______________COLEMAK_DH_R2_______________        KC_M,    KC_N,    KC_E,    KC_I,    KC_O
#define _______________COLEMAK_DH_R3_______________        KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SCLN

#define ________________BEAKL_15_L1________________        KC_Q,    KC_H,    KC_O,    KC_U,    KC_X
#define ________________BEAKL_15_L2________________        KC_Y,    KC_I,    KC_E,    KC_A,   KC_AT
#define ________________BEAKL_15_L3________________        KC_J,KC_SLASH, KC_COMM,    KC_K,   KC_DOT 

#define ________________BEAKL_15_R1________________        KC_G,    KC_C,    KC_R,    KC_F,    KC_Z
#define ________________BEAKL_15_R2________________        KC_D,    KC_S,    KC_T,    KC_N,    KC_B
#define ________________BEAKL_15_R3________________        KC_W,    KC_M,    KC_L,    KC_P,    KC_V

#define ______________HANDSDOWN_ALT_L1_____________        KC_W,    KC_C,    KC_H,    KC_F,    KC_V
#define ______________HANDSDOWN_ALT_L2_____________        KC_R,    KC_S,    KC_N,    KC_T,    KC_G
#define ______________HANDSDOWN_ALT_L3_____________        KC_X,    KC_M,    KC_L,    KC_D,    KC_B 

#define ______________HANDSDOWN_ALT_R1_____________        KC_QUOT,    KC_Y,    KC_U,    KC_Q,    KC_J
#define ______________HANDSDOWN_ALT_R2_____________        KC_K,    KC_I,    KC_E,    KC_A,    KC_O
#define ______________HANDSDOWN_ALT_R3_____________        KC_Z,    KC_P,    KC_COMM, KC_DOT,  KC_SCLN
#define ____THUMB_L____ LT(_NUM, KC_ESC), KC_SPC, LA_NAV
#define ____THUMB_R____ LA_SYM, KC_ENT, KC_LSFT

#define ____THUMB_NAV_L____ _______, _______, _______
#define ____THUMB_NAV_R____ _______, MO(_CFG), _______ 

#define ____THUMB_SYM_L____ _______, MO(_CFG), _______
#define ____THUMB_SYM_R____ _______, _______, _______ 
 
#define ____THUMB_CFG_R____ _______, _______, _______ 
#define ____THUMB_CFG_L____ _______, _______, _______ 

#define ____THUMB_NUM_R____ KC_PEQL, KC_PENT, _______ 
#define ____THUMB_NUM_L____ _______, _______, _______ 
/* SYM layer
 *  *
 *  * ,-----------------------------.        ,-----------------------------.
 *  * |  `  |  ^  |  @  |  $  |  ~  |        |     |     |     |     |     |
 *  * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
 *  * |  &  |  !  |  +  |  _  |  #  |        | pgup|ctrl | alt | gui |shift|
 *  * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+----
 *  * |  |  |  ?  |  -  |  %  |     |        | pgdn|     |     |     |     |
 *  * `-----------------------------'        `-----------------------------'
 *  */
 #define _________________SYMBOL_L1_________________          KC_GRV, KC_CIRC,   KC_AT,  KC_DLR, KC_TILD
 #define _________________SYMBOL_L2_________________         KC_AMPR, KC_EXLM, KC_PLUS, KC_UNDS, KC_HASH   
 #define _________________SYMBOL_L3_________________         KC_PIPE, KC_QUES, KC_MINS, KC_PERC, XXXXXXX 

 #define _________________SYMBOL_R1_________________         XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX  
 #define _________________SYMBOL_R2_________________         KC_PGUP, OS_CTRL,  OS_ALT,   OS_GUI, OS_SHFT
 #define _________________SYMBOL_R3_________________         KC_PGDN, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX 

 /* Raise/nav
  *  * ,-----------------------------.          ,-----------------------------.
  *  * |     | vol- | mute| vol+|    |          |     | pgdn|  up | pgup| del |
  *  * |-----+-----+-----+-----+-----|          |-----+-----+-----+-----+-----|
  *  * |shift| gui | alt | ctrl|     |          | home| left| down|right| end |
  *  * |-----+-----+-----+-----+-----|	        |-----+-----+-----+-----+-----|
  *  * | prev| play| stop| next|     |          |     |     |     |     |     |
  *  * `-----------------------------'	        `-----------------------------'
  *  */
  #define _________________NAV_L1____________________           XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX
  #define _________________NAV_L2____________________           OS_SHFT,  OS_GUI,  OS_ALT, OS_CTRL, XXXXXXX 
  #define _________________NAV_L3____________________           KC_MPRV, KC_MPLY, KC_MSTP, KC_MNXT, XXXXXXX

  #define _________________NAV_R1____________________          XXXXXXX, KC_PGDN,   KC_UP, KC_PGUP,  KC_DEL
  #define _________________NAV_R2____________________          KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT,  KC_END
  #define _________________NAV_R3____________________          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

 /* NUM 
  *  * ,-----------------------------.          ,-----------------------------.
  *  * |     |  f9 | f10 | f11 | f12 |          |  +  | num7| num8| num9|  /  |
  *  * |-----+-----+-----+-----+-----|          |-----+-----+-----+-----+-----|
  *  * |     |  f5 |  f6 |  f7 |  f8 |          | NUM0| num4| num5| num6|  .  |
  *  * |-----+-----+-----+-----+-----|	        |-----+-----+-----+-----+-----|
  *  * |     |  f1 |  f2 |  f3 |  f4 |          |  -  | num1| num2| num3|  *  |
  *  * `-----------------------------'	        `-----------------------------'
  *  */
  #define _________________NUM_L1____________________           XXXXXXX, KC_F9, KC_F10, KC_F11, KC_F12
  #define _________________NUM_L2____________________           XXXXXXX, KC_F5,  KC_F6, KC_F7, KC_F8 
  #define _________________NUM_L3____________________           XXXXXXX, KC_F1,  KC_F2, KC_F3, KC_F4           

  #define _________________NUM_R1____________________           KC_PPLS, KC_P7, KC_8, KC_P9,  KC_PSLS
  #define _________________NUM_R2____________________             KC_P0, KC_P4, KC_P5, KC_P6,  KC_PDOT
  #define _________________NUM_R3____________________           KC_PMNS, KC_P1, KC_P2, KC_P3, KC_PAST 

/* ADJUST
 *  *  *
 *  * ,-----------------------------.        ,-----------------------------.
 *  * |Quert|Cole |ColDH|BEAKL| HD  |        |     |     |  ü  |     |     |
 *  * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
 *  * |  ä  |     |  ß  |     |     |        |     |     |     |     |  ö  | 
 *  * |-----+-----+-----+-----+-----|        |-----+-----+-----+-----+-----|
 *  * |     |     |     |     |     |        |     |     |     |     |     |
 *  * `-----------------------------'        `-----------------------------'
 *  */

 #define ___________________CFG_L1__________________         DF(_ALPHA_QWERTY), DF(_ALPHA_COLEMAK), DF(_ALPHA_COLEMAK_DH),DF(_ALPHA_BEAKL_15), DF(_ALPHA_HD)
 #define ___________________CFG_L2__________________         KC_AUML, _______, KC_SZET, _______, _______ 
 #define ___________________CFG_L3__________________         KC_NLCK, _______, _______, _______, _______ 

 #define ___________________CFG_R1__________________         _______, _______, KC_UUML, _______, _______  
 #define ___________________CFG_R2__________________         _______, _______, _______, _______, KC_OUML  
 #define ___________________CFG_R3__________________         _______, _______, _______, _______, _______  
