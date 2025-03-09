#include QMK_KEYBOARD_H
//// define combo names
//enum combos {
//    COMBO_LayerConfig
//};
//
//const uint16_t PROGMEM combo1[] = {OSM(MOD_LSFT), KC_SPACE, COMBO_END};
//
//// map combo names to their keys and the key they trigger
//combo_t key_combos[] = {
//    [COMBO_LayerConfig] = COMBO(combo1, MO(5)),
//};

#ifdef LAYOUT_split_3x6_3_ex2
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = 
{
  [0] = LAYOUT_split_3x6_3_ex2
  (
  //|--------------------------------------------------------------------------------------------------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,          KC_Q,          KC_W,          KC_F,          KC_P,          KC_B,       KC_VOLU,             KC_F15,          KC_J,          KC_L,          KC_U,          KC_Y,     RCTL(KC_RBRC),             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,          KC_A,          KC_R,          KC_S,          KC_T,          KC_G,       KC_VOLD,             KC_F14,          KC_M,          KC_N,          KC_E,          KC_I,              KC_O,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,          KC_Z,          KC_X,          KC_C,          KC_D,          KC_V,                                             KC_K,          KC_H,      KC_COMMA,        KC_DOT,          KC_SLASH,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
                                                                      MO(3),        MO(1),     OSM(MOD_LSFT),         KC_SPACE,         MO(2),         MO(4)
  //                                                            |--------------+--------------+--------------|    |--------------+--------------+--------------|
  ),
  [1] = LAYOUT_split_3x6_3_ex2
  (
  //|--------------------------------------------------------------------------------------------------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,    LCTL(KC_Z),    LCTL(KC_X),    LCTL(KC_C),    LCTL(KC_V),    LCTL(KC_Z),       KC_TRNS,            KC_BRIU,       KC_HOME,       KC_PGDN,       KC_PGUP,        KC_END,           KC_PSCR,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL),       KC_BSPC,       KC_TRNS,            KC_BRID,       KC_LEFT,       KC_DOWN,         KC_UP,      KC_RIGHT,         KC_ESCAPE,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO, OSM(MOD_RALT),  LSFT(KC_TAB),        KC_TAB, OSM(MOD_RCTL),      KC_ENTER,                                        KC_DELETE,       KC_BSPC,        KC_TAB,     KC_INSERT,      KC_CAPS_LOCK,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
                                                                      MO(5),       KC_TRNS,       KC_TRNS,           KC_ENTER,      KC_BTN1,       KC_BTN2
  //                                                            |--------------+--------------+--------------|    |--------------+--------------+--------------|
  ),
  [2] = LAYOUT_split_3x6_3_ex2
  (
  //|--------------------------------------------------------------------------------------------------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,    LSFT(KC_1),    LSFT(KC_2),    LSFT(KC_3),    LSFT(KC_4),    LSFT(KC_5),       KC_TRNS,            KC_TRNS,    LSFT(KC_6),    LSFT(KC_7),    LSFT(KC_8),LSFT(KC_EQUAL),    RALT(KC_GRAVE),             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,       KC_BSLS,    RALT(KC_7),       KC_LBRC,    LSFT(KC_9),    RALT(KC_9),       KC_TRNS,            KC_TRNS,   KC_KP_SLASH,      KC_MINUS,RALT(KC_COMMA),      KC_COLON,          KC_EQUAL,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO, RALT(KC_LBRC),    RALT(KC_8),       KC_RBRC,    LSFT(KC_0),    RALT(KC_0),                                    LSA(KC_GRAVE),LSFT(KC_MINUS),  RALT(KC_DOT),LSFT(KC_COLON),          KC_QUOTE,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
                                                                     KC_TRNS,       KC_TRNS,       KC_TRNS,            KC_TRNS,       KC_TRNS,        MO(5)
  //                                                            |--------------+--------------+--------------|    |--------------+--------------+--------------|
  ),
  [3] = LAYOUT_split_3x6_3_ex2
  (
  //|--------------------------------------------------------------------------------------------------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,         KC_NO, OSM(MOD_HYPR),  OSM(MOD_MEH),         KC_NO,         KC_NO,       KC_TRNS,            KC_TRNS,    KC_KP_PLUS,       KC_KP_7,       KC_KP_8,       KC_KP_9,    KC_KP_ASTERISK,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,       KC_LALT,       KC_LGUI,       KC_LSFT,       KC_LCTL,         KC_NO,       KC_TRNS,            KC_TRNS,   KC_KP_MINUS,       KC_KP_4,       KC_KP_5,       KC_KP_6,       KC_KP_SLASH,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,       KC_RALT,         KC_NO,         KC_NO,       KC_RCTL,         KC_NO,                                         KC_COMMA,       KC_KP_1,       KC_KP_2,       KC_KP_3,           KC_DOT,              KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
                                                                     KC_TRNS,         MO(5),       KC_TRNS,           KC_ENTER,      KC_KP_0,       KC_KP_0
  //                                                            |--------------+--------------+--------------|    |--------------+--------------+--------------|
  ),
  [4] = LAYOUT_split_3x6_3_ex2
  (
  //|--------------------------------------------------------------------------------------------------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,       KC_TRNS,            KC_TRNS,         KC_NO,         KC_F7,         KC_F8,         KC_F9,            KC_F10,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
             KC_NO ,       KC_LALT,       KC_LGUI,       KC_LSFT,       KC_LCTL,         KC_NO,       KC_TRNS,            KC_TRNS,         KC_NO,         KC_F4,         KC_F5,         KC_F6,            KC_F11,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,       KC_RALT,         KC_NO,         KC_NO,       KC_RCTL,         KC_NO,                                            KC_NO,         KC_F1,         KC_F2,         KC_F3,            KC_F12,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
                                                                     KC_TRNS,       KC_TRNS,       KC_TRNS,            KC_TRNS,        MO(5),        KC_TRNS
  //                                                            |--------------+--------------+--------------|    |--------------+--------------+--------------|
  ),
[5] = LAYOUT_split_3x6_3_ex2
  (
  //|--------------------------------------------------------------------------------------------------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
            QK_BOOT,       RGB_MOD,       RGB_HUI,       RGB_SAI,       RGB_VAI,       RGB_SPI,       KC_TRNS,            KC_TRNS,         KC_NO,         KC_NO,         KC_NO,         KC_NO,             KC_NO,           QK_BOOT,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,       RGB_M_P,       RGB_M_B,       KC_BTN2,       KC_BTN1,       RGB_TOG,       KC_TRNS,            KC_TRNS,       KC_MS_L,       KC_MS_D,       KC_MS_U,       KC_MS_R,             KC_NO,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,      RGB_RMOD,       RGB_HUD,       RGB_SAD,       RGB_VAD,       RGB_SPD,                                            KC_NO,         KC_NO,         KC_NO,         KC_NO,             KC_NO,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
                                                                     KC_TRNS,      KC_TRNS,       KC_TRNS,            KC_TRNS,       KC_TRNS,       KC_TRNS
  //                                                            |--------------+--------------+--------------|    |--------------+--------------+--------------|
  )
};
#else
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = 
{
  [0] = LAYOUT_split_3x6_3
  (
  //|-----------------------------------------------------------------------------------------|                                  |--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,          KC_Q,          KC_W,          KC_F,          KC_P,          KC_B,                                             KC_J,          KC_L,          KC_U,          KC_Y,     RCTL(KC_RBRC),             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------|                                  |--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,          KC_A,          KC_R,          KC_S,          KC_T,          KC_G,                                             KC_M,          KC_N,          KC_E,          KC_I,              KC_O,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------|                                  |--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,          KC_Z,          KC_X,          KC_C,          KC_D,          KC_V,                                             KC_K,          KC_H,      KC_COMMA,        KC_DOT,          KC_SLASH,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
                                                                      MO(3),        MO(1),     OSM(MOD_LSFT),         KC_SPACE,         MO(2),         MO(4)
  //                                                            |--------------+--------------+--------------|    |--------------+--------------+--------------|
  ),
  [1] = LAYOUT_split_3x6_3
  (
  //|-----------------------------------------------------------------------------------------|                                  |--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,    LCTL(KC_Z),    LCTL(KC_X),    LCTL(KC_C),    LCTL(KC_V),    LCTL(KC_Z),                                          KC_HOME,       KC_PGDN,       KC_PGUP,        KC_END,           KC_PSCR,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------|                                  |--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL),       KC_BSPC,                                          KC_LEFT,       KC_DOWN,         KC_UP,      KC_RIGHT,         KC_ESCAPE,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------|                                  |--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO, OSM(MOD_RALT),  LSFT(KC_TAB),        KC_TAB, OSM(MOD_RCTL),      KC_ENTER,                                        KC_DELETE,       KC_BSPC,        KC_TAB,     KC_INSERT,      KC_CAPS_LOCK,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
                                                                      MO(5),       KC_TRNS,       KC_TRNS,           KC_ENTER,      KC_BTN1,       KC_BTN2
  //                                                            |--------------+--------------+--------------|    |--------------+--------------+--------------| 
  ),
  [2] = LAYOUT_split_3x6_3
  (
  //|-----------------------------------------------------------------------------------------|                                  |--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,    LSFT(KC_1),    LSFT(KC_2),    LSFT(KC_3),    LSFT(KC_4),    LSFT(KC_5),                                       LSFT(KC_6),    LSFT(KC_7),    LSFT(KC_8),LSFT(KC_EQUAL),    RALT(KC_GRAVE),             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------|                                  |--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,       KC_BSLS,    RALT(KC_7),       KC_LBRC,    LSFT(KC_9),    RALT(KC_9),                                      KC_KP_SLASH,      KC_MINUS,RALT(KC_COMMA),      KC_COLON,          KC_EQUAL,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------|                                  |--------------+--------------+--------------+--------------+-----------------+------------------|
              KC_NO, RALT(KC_LBRC),    RALT(KC_8),       KC_RBRC,    LSFT(KC_0),    RALT(KC_0),                                   LSFT(KC_GRAVE),LSFT(KC_MINUS),  RALT(KC_DOT),LSFT(KC_COLON),          KC_QUOTE,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
                                                                     KC_TRNS,       KC_TRNS,       KC_TRNS,            KC_TRNS,       KC_TRNS,        MO(5)
  //                                                            |--------------+--------------+--------------|    |--------------+--------------+--------------|
  ),
  [3] = LAYOUT_split_3x6_3
  (
  //|-----------------------------------------------------------------------------------------|                                  |--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,         KC_NO, OSM(MOD_HYPR),  OSM(MOD_MEH),         KC_NO,         KC_NO,                                       KC_KP_PLUS,       KC_KP_7,       KC_KP_8,       KC_KP_9,    KC_KP_ASTERISK,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------|                                  |--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,       KC_LALT,       KC_LGUI,       KC_LSFT,       KC_LCTL,         KC_NO,                                      KC_KP_MINUS,       KC_KP_4,       KC_KP_5,       KC_KP_6,       KC_KP_SLASH,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------|                                  |--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,       KC_RALT,         KC_NO,         KC_NO,       KC_RCTL,         KC_NO,                                         KC_COMMA,       KC_KP_1,       KC_KP_2,       KC_KP_3,           KC_DOT,              KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
                                                                     KC_TRNS,         MO(5),       KC_TRNS,           KC_ENTER,      KC_KP_0,       KC_KP_0
  //                                                            |--------------+--------------+--------------|    |--------------+--------------+--------------|
  ),
  [4] = LAYOUT_split_3x6_3
  (
  //|-----------------------------------------------------------------------------------------|                                  |--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,                                            KC_NO,         KC_F7,         KC_F8,         KC_F9,            KC_F10,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------|                                  |--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,       KC_LALT,       KC_LGUI,       KC_LSFT,       KC_LCTL,         KC_NO,                                            KC_NO,         KC_F4,         KC_F5,         KC_F6,            KC_F11,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------|                                  |--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,       KC_RALT,         KC_NO,         KC_NO,       KC_RCTL,         KC_NO,                                            KC_NO,         KC_F1,         KC_F2,         KC_F3,            KC_F12,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
                                                                     KC_TRNS,       KC_TRNS,       KC_TRNS,            KC_TRNS,        MO(5),        KC_TRNS
  //                                                            |--------------+--------------+--------------|    |--------------+--------------+--------------|
  ),
  [5] = LAYOUT_split_3x6_3
  (
  
  
  //|-----------------------------------------------------------------------------------------|                                  |--------------+--------------+--------------+--------------+------------------+------------------|
            QK_BOOT,       RGB_MOD,       RGB_HUI,       RGB_SAI,       RGB_VAI,       RGB_SPI,                                            KC_NO,         KC_NO,         KC_NO,         KC_NO,             KC_NO,           QK_BOOT,
  //|--------------+--------------+--------------+--------------+--------------+--------------|                                  |--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,       RGB_M_P,       RGB_M_B,       KC_BTN2,       KC_BTN1,       RGB_TOG,                                          KC_MS_L,       KC_MS_D,       KC_MS_U,       KC_MS_R,             KC_NO,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
              KC_NO,      RGB_RMOD,       RGB_HUD,       RGB_SAD,       RGB_VAD,       RGB_SPD,                                            KC_NO,         KC_NO,         KC_NO,         KC_NO,             KC_NO,             KC_NO,
  //|--------------+--------------+--------------+--------------+--------------+--------------+--------------|    |--------------+--------------+--------------+--------------+--------------+------------------+------------------|
                                                                     KC_TRNS,       KC_TRNS,      KC_TRNS,            KC_TRNS,       KC_TRNS,       KC_TRNS
  //                                                            |--------------+--------------+--------------|    |--------------+--------------+--------------|
  )
};
#endif

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [1] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [2] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [3] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [4] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [5] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
};
#endif
