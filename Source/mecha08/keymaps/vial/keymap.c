/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
      KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_PSCR, KC_SCRL, KC_PAUSE,
      KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSPC, KC_INSERT, KC_HOME, KC_PGUP,
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DELETE, KC_END, KC_PGDN,
      KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOTE, KC_TRNS, KC_ENTER, KC_TRNS, KC_TRNS, KC_TRNS ,
      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS,
      KC_LCTL, KC_LGUI, KC_LALT, KC_TRNS, KC_TRNS, KC_SPACE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_RGUI, MO(1), KC_TRNS, KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT
    ),

    [1] = LAYOUT(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_KB_0, QK_KB_1, RGB_TOG,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_MOD, RGB_SPI, RGB_VAI,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_RMOD, RGB_SPD, RGB_VAD,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_HUI, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SAD, RGB_HUD, RGB_SAI
    )
};

#ifdef RGB_MATRIX_ENABLE
#include "rgb_matrix.h"
__attribute__ ((weak)) led_config_t g_led_config = {
  {
    { 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, NO_LED, 86, 87, 88 },
    { 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56 },
    { 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55 },
    { 38, 37, 36, 35, 34, 33, 32, 31, 118, 29, 28, 27, NO_LED, 26, 0, 1, 2 },
    { 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, NO_LED, NO_LED, NO_LED, 25, NO_LED },
    { 12, 11, 10, NO_LED, NO_LED, NO_LED, 9, NO_LED, NO_LED, NO_LED, NO_LED, 8, 7, 6, 5, 4, 3 },
  },
  { {198, 33}, {198, 38}, {198, 43}, {222, 62}, {209, 62}, {196, 62}, {180, 62}, {165, 62}, {150, 62}, {90, 62}, {30, 62}, {14, 62}, {1, 62}, {10, 50}, {33, 50}, {46, 50}, {59, 50}, {72, 50}, {85, 50}, {98, 50}, {111, 50}, {124, 50}, {137, 50}, {150, 50}, {170, 50}, {208, 50}, {172, 38}, {156, 38}, {143, 38}, {130, 38}, {117, 38}, {104, 38}, {91, 38}, {78, 38}, {65, 38}, {52, 38}, {39, 38}, {26, 38}, {13, 38}, {0, 26}, {14, 26}, {28, 26}, {42, 26}, {56, 26}, {70, 26}, {84, 26}, {98, 26}, {112, 26}, {126, 26}, {140, 26}, {154, 26}, {178, 26}, {182, 26}, {196, 26}, {210, 26}, {224, 26}, {224, 14}, {210, 14}, {196, 14}, {182, 14}, {178, 14}, {154, 14}, {140, 14}, {126, 14}, {112, 14}, {98, 14}, {84, 14}, {70, 14}, {56, 14}, {42, 14}, {28, 14}, {14, 14}, {0, 14}, {0, 2}, {24, 2}, {36, 2}, {50, 2}, {62, 2}, {84, 2}, {96, 2}, {108, 2}, {120, 2}, {142, 2}, {154, 2}, {166, 2}, {178, 2}, {200, 2}, {212, 2}, {224, 2}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32}, {112, 32} },
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
};
#endif

typedef union {
  uint32_t raw;
  struct {
    bool top_rgb_change :1;
    bool bottom_rgb_change :1;
  };
} user_config_t;

user_config_t user_config;

enum custom_keycodes {
    USER00 = QK_KB_0,
    USER01
};

void keyboard_post_init_user(void) {
  // Read the user config from EEPROM
  user_config.raw = eeconfig_read_user();
}
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case USER00:
      if (record->event.pressed) {
        // Do something when pressed
        user_config.top_rgb_change ^= 1; // Toggles the status
        eeconfig_update_user(user_config.raw); // Writes the new status to EEPROM
      } else {
        // Do something else when release
      }
      return false; // Skip all further processing of this key
    case USER01:
      if (record->event.pressed) {
        // Do something when pressed
        user_config.bottom_rgb_change ^= 1; // Toggles the status
        eeconfig_update_user(user_config.raw); // Writes the new status to EEPROM
      } else {
        // Do something else when release
      }
      return false; // Skip all further processing of this key
    default:
      return true; // Process all other keycodes normally
  }
}
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {

    if (user_config.top_rgb_change)
    {
        for (size_t i = 0; i < 89; i++)
        {
            RGB_MATRIX_INDICATOR_SET_COLOR(i, 0, 0, 0);
        }
    }

    if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(0, 255, 255, 255); // assuming caps lock is at led #5
        RGB_MATRIX_INDICATOR_SET_COLOR(1, 255, 255, 255); // assuming caps lock is at led #5
        RGB_MATRIX_INDICATOR_SET_COLOR(2, 255, 255, 255); // assuming caps lock is at led #5
    }
    if (user_config.bottom_rgb_change)
    {
        for (size_t i = 89; i < 119; i++)
        {
            RGB_MATRIX_INDICATOR_SET_COLOR(i, 0, 0, 0);
        }
    }
    return false;
}

