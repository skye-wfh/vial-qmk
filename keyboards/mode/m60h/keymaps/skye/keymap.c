// Copyright 2023 contact@vwolf.be
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define MAC 0
#define WIN 1
#define FNC 2
#define CFG 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Layer 0: Default Layer - Mac
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
│Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ \ │ ` │
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
│ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │ Bspc│
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
│ Fn   │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │
├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤
│ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ Shift│ Fn│
└─────┬──┴┬──┴──┬┴───┴───┴───┴───┴───┴───┴──┬┴───┴┬───┬─┴───┘
      │Opt│ Cmd │                           │ Cmd │Ctl│
      └───┴─────┴───────────────────────────┴─────┴───┘
*/
[MAC] = LAYOUT_60_hhkb(
KC_ESC ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_MINS, KC_EQL,KC_BSLS,KC_GRV , \
KC_TAB ,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_LBRC,KC_RBRC,KC_BSPC,         \
MO(FNC),KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_SCLN,KC_QUOT, KC_ENT,                 \
KC_LSFT,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,KC_N   ,KC_M   ,KC_COMM, KC_DOT,KC_SLSH,KC_RSFT,MO(FNC),                 \
        KC_LOPT,KC_LCMD,                        KC_SPC                         ,KC_RCMD,KC_RCTL),

/* Layer 1: Default Layer - Win
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
│Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ \ │ ` │
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
│ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │ Bspc│
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
│ Fn   │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │
├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤
│ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ Shift│ Fn│
└─────┬──┴┬──┴──┬┴───┴───┴───┴───┴───┴───┴──┬┴───┴┬───┬─┴───┘
      │Alt│ Ctl │                           │ Ctl │Win│
      └───┴─────┴───────────────────────────┴─────┴───┘
*/
[WIN] = LAYOUT_60_hhkb(
KC_ESC ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_MINS,KC_EQL ,KC_BSLS,KC_GRV , \
KC_TAB ,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_LBRC,KC_RBRC,KC_BSPC,         \
MO(FNC),KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_SCLN,KC_QUOT,KC_ENT ,                 \
KC_LSFT,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,MO(FNC),                 \
        KC_LALT,KC_LCTL,                        KC_SPC                         ,KC_RCTL,KC_RWIN),

/* Layer 2: Function Layer
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
│Ejc│F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│Ins│Del│
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
│ Cap │Hom│ U │End│PgU│   │   │ % │ ^ │ & │ * │Vo-│Vo+│ Mute│
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
│      │ L │ D │ R │PgD│   │   │ ~ │ + │ - │ * │ / │ Config │
├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤
│        │   │   │   │   │   │   │   │Prv│Nxt│P/P│      │   │
└─────┬──┴┬──┴──┬┴───┴───┴───┴───┴───┴───┴──┬┴───┴┬───┬─┴───┘
      │   │     │                           │     │   │
      └───┴─────┴───────────────────────────┴─────┴───┘
*/
[FNC]= LAYOUT_60_hhkb(
KC_EJCT,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,KC_INS ,KC_DEL , \
KC_CAPS,KC_HOME,KC_UP  ,KC_END ,KC_PGUP,KC_TRNS,KC_TRNS,KC_PERC,KC_CIRC,KC_AMPR,KC_ASTR,KC_VOLD,KC_VOLU,KC_MUTE,         \
KC_TRNS,KC_LEFT,KC_DOWN,KC_RGHT,KC_PGDN,KC_TRNS,KC_TRNS,KC_TILD,KC_PPLS,KC_PMNS,KC_PAST,KC_PSLS,MO(CFG),                 \
KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_MPRV,KC_MNXT,KC_MPLY,KC_TRNS,KC_TRNS,                 \
        KC_TRNS,KC_TRNS,                        KC_TRNS                        ,KC_TRNS,KC_TRNS),

/* Layer 3: Configuration Layer
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
│DFU│   │   │   │   │   │   │   │   │   │   │   │   │   │   │
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
│     │   │   │   │   │   │   │   │   │   │   │   │   │     │
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
│      │   │   │   │   │   │   │   │   │   │   │   │        │
├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤
│        │   │   │   │   │   │   │   │   │   │   │      │   │
└─────┬──┴┬──┴──┬┴───┴───┴───┴───┴───┴───┴──┬┴───┴┬───┬─┴───┘
      │   │ MAC │          Reset            │ WIN │   │
      └───┴─────┴───────────────────────────┴─────┴───┘
*/
[CFG] = LAYOUT_60_hhkb(
QK_BOOT,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, \
KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,        \
KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,                \
KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,                \
        KC_TRNS,DF(MAC),                        QK_RBT                         ,DF(WIN),KC_TRNS),
};