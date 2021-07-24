#include QMK_KEYBOARD_H
#include "print.h"

#define BLUESET_INDICATOR_FADE_TIME (2 * 1000)

enum ctrl_keycodes {
    L_BRI = SAFE_RANGE, //LED Brightness Increase                                   //Working
    L_BRD,              //LED Brightness Decrease                                   //Working
    L_PTN,              //LED Pattern Select Next                                   //Working
    L_PTP,              //LED Pattern Select Previous                               //Working
    L_PSI,              //LED Pattern Speed Increase                                //Working
    L_PSD,              //LED Pattern Speed Decrease                                //Working
    L_T_MD,             //LED Toggle Mode                                           //Working
    L_T_ONF,            //LED Toggle On / Off                                       //Broken
    L_ON,               //LED On                                                    //Broken
    L_OFF,              //LED Off                                                   //Broken
    L_T_BR,             //LED Toggle Breath Effect                                  //Working
    L_T_PTD,            //LED Toggle Scrolling Pattern Direction                    //Working
    U_T_AUTO,           //USB Extra Port Toggle Auto Detect / Always Active
    U_T_AGCR,           //USB Toggle Automatic GCR control                          //Working
    DBG_TOG,            //DEBUG Toggle On / Off                                     //
    DBG_MTRX,           //DEBUG Toggle Matrix Prints                                //
    DBG_KBD,            //DEBUG Toggle Keyboard Prints                              //
    DBG_MOU,            //DEBUG Toggle Mouse Prints                                 //
    MD_BOOT,            //Restart into bootloader after hold timeout                //Working
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
        KC_ESC,  KC_BRID, KC_BRIU, KC_F3,   KC_F4,   RGB_VAD, RGB_VAI, KC_MRWD, KC_MPLY, KC_MFFD, KC_MUTE, KC_VOLD, KC_VOLU,            KC_PSCR, KC_SLCK, KC_PAUS, \
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,   KC_INS,  KC_HOME, KC_PGUP, \
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC, KC_BSLS,   KC_DEL,  KC_END,  KC_PGDN, \
        KC_BSPC, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT, KC_ENT, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                              KC_UP, \
        KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                             KC_RALT, KC_RGUI, LT(2,KC_APP), KC_RCTL,       KC_LEFT, KC_DOWN, KC_RGHT),
	[1] = LAYOUT(
        KC_ESC,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            KC_PSCR, KC_SLCK, KC_PAUS, \
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,   KC_INS,  KC_HOME, KC_PGUP, \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,   KC_DEL,  KC_END,  KC_PGDN, \
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  _______, KC_RSFT,                              KC_UP, \
        KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                             KC_RALT, KC_RGUI, LT(2,KC_APP), KC_RCTL,       KC_LEFT, KC_DOWN, KC_RGHT),
	[2] = LAYOUT(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,             _______, _______, KC_MUTE, \
        _______, DBG_TOG, DBG_MTRX,DBG_KBD, DBG_MOU, _______, _______, _______, _______, _______, _______, _______, _______, RESET,     KC_MPLY, KC_MSTP, KC_VOLU, \
        _______, RGB_SPD, RGB_VAI, RGB_SPI, RGB_HUI, RGB_SAI, _______, U_T_AUTO,U_T_AGCR,_______, _______, _______, _______, DEBUG,     KC_MPRV, KC_MNXT, KC_VOLD, \
        _______, RGB_RMOD,RGB_VAD, RGB_MOD, RGB_HUD, RGB_SAD, _______, _______, _______, _______, _______, _______, _______, \
        _______, RGB_TOG, _______, _______, _______, MD_BOOT, NK_TOGG, _______, _______, AG_TOGG, TG(1),   _______,                              _______, \
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______),
	[3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                              _______, \
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______)
    /*
    [X] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, NK_TOGG, _______, _______, _______, _______, _______,                              _______, \
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______ \
    ),
    */
};

enum ctrl_rgb_mode {
    RGB_MODE_ALL,
    RGB_MODE_KEYLIGHT_AND_MODIFIER,
    RGB_MODE_UNDERGLOW,
    RGB_MODE_NONE,
};

typedef union {
    uint32_t raw;
    struct {
        uint8_t rgb_mode :8;
    };
} ctrl_config_t;

ctrl_config_t ctrl_config;

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
};

// Keyboard post initialization
void keyboard_post_init_kb(void) {
    // Set pre-configured RGB mode
    ctrl_config.raw = eeconfig_read_user();
    // uprintf("EEPROM USER STORED: %d", ctrl_config.raw);
    switch (ctrl_config.rgb_mode) {
        case RGB_MODE_ALL:
            rgb_matrix_set_flags(LED_FLAG_ALL);
            rgb_matrix_enable_noeeprom();
            break;
        case RGB_MODE_KEYLIGHT_AND_MODIFIER:
            rgb_matrix_set_flags(LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER);
            rgb_matrix_set_color_all(0, 0, 0);
            break;
        case RGB_MODE_UNDERGLOW:
            rgb_matrix_set_flags(LED_FLAG_UNDERGLOW);
            rgb_matrix_set_color_all(0, 0, 0);
            break;
        case RGB_MODE_NONE:
            rgb_matrix_set_flags(LED_FLAG_NONE);
            rgb_matrix_disable_noeeprom();
            break;
    }
}

static uint16_t layout_switch_timer;
static bool is_layout_qwerty;
static uint16_t os_switch_timer;
static bool is_os_macos;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;

    switch (keycode) {
        case U_T_AUTO:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_extra_manual, "USB extra port manual mode");
            }
            return false;
        case U_T_AGCR:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_gcr_auto, "USB GCR auto mode");
            }
            return false;
        case DBG_TOG:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_enable, "Debug mode");
            }
            return false;
        case DBG_MTRX:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_matrix, "Debug matrix");
            }
            return false;
        case DBG_KBD:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_keyboard, "Debug keyboard");
            }
            return false;
        case DBG_MOU:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_mouse, "Debug mouse");
            }
            return false;
        case MD_BOOT:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= 500) {
                    reset_keyboard();
                }
            }
            return false;
        case RGB_TOG:
            if (record->event.pressed) {
                switch (rgb_matrix_get_flags()) {
                    case LED_FLAG_ALL: {
                        ctrl_config.rgb_mode = RGB_MODE_KEYLIGHT_AND_MODIFIER;
                        rgb_matrix_set_flags(LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER);
                        rgb_matrix_set_color_all(0, 0, 0);
                        break;
                    }
                    case LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER: {
                        ctrl_config.rgb_mode = RGB_MODE_UNDERGLOW;
                        rgb_matrix_set_flags(LED_FLAG_UNDERGLOW);
                        rgb_matrix_set_color_all(0, 0, 0);
                        break;
                    }

                    case LED_FLAG_UNDERGLOW: {
                        ctrl_config.rgb_mode = RGB_MODE_NONE;
                        rgb_matrix_set_flags(LED_FLAG_NONE);
                        rgb_matrix_disable_noeeprom();
                        break;
                    }
                    default: {
                        ctrl_config.rgb_mode = RGB_MODE_ALL;
                        rgb_matrix_set_flags(LED_FLAG_ALL);
                        rgb_matrix_enable_noeeprom();
                        break;
                    }
                }
                // uprintf("Setting USER EEPROM to %d", ctrl_config.raw);
                eeconfig_update_user(ctrl_config.raw);
                // ctrl_config.raw = eeconfig_read_user();
                // uprintf("EEPROM USER STORED: %d", ctrl_config.raw);
            }
            return false;
        case AG_TOGG:
            if (record->event.pressed) {
                is_os_macos = !keymap_config.swap_lalt_lgui;
                rgb_matrix_set_color(98, 0, 0, 0);
                rgb_matrix_set_color(97, 0, 0, 0);
                rgb_matrix_set_color(92, 0, 0, 0);
                rgb_matrix_set_color(91, 0, 0, 0);
                os_switch_timer = timer_read();
            }
            return true;
        case TG(1):
            if (record->event.pressed) {
                is_layout_qwerty = !layer_state_is(1);
                rgb_matrix_set_color(29, 0, 0, 0);
                rgb_matrix_set_color(50, 0, 0, 0);
                layout_switch_timer = timer_read();
            }
            return true;
        default:
            return true; //Process all other keycodes normally
    }
}

void rgb_matrix_indicators_user(void) {
    if (os_switch_timer != 0) {
        int time_passed = timer_elapsed(os_switch_timer);
        uint8_t led_id_left = is_os_macos ? 97 /* below left cmd */ : 98 /* below left Win */;
        uint8_t led_id_right = is_os_macos ? 92 /* below right cmd */ : 91 /* below right Win */;
        uint8_t level = 0;
        if (time_passed >= BLUESET_INDICATOR_FADE_TIME) {
            os_switch_timer = 0;
        } else {
            level = 0xff - (0xff * time_passed / BLUESET_INDICATOR_FADE_TIME);
        }
        rgb_matrix_set_color(led_id_left, level, level, level);
        rgb_matrix_set_color(led_id_right, level, level, level);
    }
    if (layout_switch_timer != 0) {
        int time_passed = timer_elapsed(layout_switch_timer);
        uint8_t led_id = is_layout_qwerty ? 29 /* bksp */ : 50 /* bksp (caps) */;
        uint8_t level = 0;
        if (time_passed >= BLUESET_INDICATOR_FADE_TIME) {
            layout_switch_timer = 0;
        } else {
            level = 0xff - (0xff * time_passed / BLUESET_INDICATOR_FADE_TIME);
        }
        rgb_matrix_set_color(led_id, level, level, level);
    }
}

void suspend_power_down_user(void) {
    rgb_matrix_set_suspend_state(true);
}

void suspend_wakeup_init_user(void) {
    rgb_matrix_set_suspend_state(false);
}

// led_instruction_t led_instructions[] = {
//     //LEDs are normally inactive, no processing is performed on them
//     //Flags are used in matching criteria for an LED to be active and indicate how to color it
//     //Flags can be found in tmk_core/protocol/arm_atsam/md_rgb_matrix.h (prefixed with LED_FLAG_)
//     //LED IDs can be found in config_led.h in the keyboard's directory
//     //Examples are below

//     //All LEDs use the user's selected pattern (this is the factory default)
//      { .flags = LED_FLAG_USE_ROTATE_PATTERN },

//     //Specific LEDs use the user's selected pattern while all others are off
//     // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_ROTATE_PATTERN, .id0 = 0xFFFFFFFF, .id1 = 0xAAAAAAAA, .id2 = 0x55555555, .id3 = 0x11111111 },

//     //Specific LEDs use specified RGB values while all others are off
//     // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .id0 = 0xFF, .id1 = 0x00FF, .id2 = 0x0000FF00, .id3 = 0xFF000000, .r = 75, .g = 150, .b = 225 },

//     //All LEDs use the user's selected pattern
//     //On layer 1, all key LEDs (except the top row which keeps active pattern) are red while all edge LEDs are green
//     //When layer 1 is active, key LEDs use red    (id0  32 -  17: 1111 1111 1111 1111 0000 0000 0000 0000 = 0xFFFF0000) (except top row 16 - 1)
//     //When layer 1 is active, key LEDs use red    (id1  64 -  33: 1111 1111 1111 1111 1111 1111 1111 1111 = 0xFFFFFFFF)
//     //When layer 1 is active, key LEDs use red    (id2  87 -  65: 0000 0000 0111 1111 1111 1111 1111 1111 = 0x007FFFFF)
//     //When layer 1 is active, edge LEDs use green (id2  95 -  88: 1111 1111 1000 0000 0000 0000 0000 0000 = 0xFF800000)
//     //When layer 1 is active, edge LEDs use green (id3 119 -  96: 0000 0000 1111 1111 1111 1111 1111 1111 = 0x00FFFFFF)
//     // { .flags = LED_FLAG_USE_ROTATE_PATTERN },
//     // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0xFFFF0000, .id1 = 0xFFFFFFFF, .id2 = 0x007FFFFF, .r = 255, .layer = 1 },
//     // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id2 = 0xFF800000, .id3 = 0x00FFFFFF, .g = 127, .layer = 1 },

//     //All key LEDs use red while edge LEDs use the active pattern
//     //All key LEDs use red     (id0  32 -   1: 1111 1111 1111 1111 1111 1111 1111 1111 = 0xFFFFFFFF)
//     //All key LEDs use red     (id1  64 -  33: 1111 1111 1111 1111 1111 1111 1111 1111 = 0xFFFFFFFF)
//     //All key LEDs use red     (id2  87 -  65: 0000 0000 0111 1111 1111 1111 1111 1111 = 0x007FFFFF)
//     //Edge uses active pattern (id2  95 -  88: 1111 1111 1000 0000 0000 0000 0000 0000 = 0xFF800000)
//     //Edge uses active pattern (id3 119 -  96: 0000 0000 1111 1111 1111 1111 1111 1111 = 0x00FFFFFF)
//     // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .id0 = 0xFFFFFFFF, .id1 = 0xFFFFFFFF, .id2 = 0x007FFFFF, .r = 255 },
//     // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_ROTATE_PATTERN , .id2 = 0xFF800000, .id3 = 0x00FFFFFF },

//     //end must be set to 1 to indicate end of instruction set
//      { .end = 1 }
// };
