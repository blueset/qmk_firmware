#pragma once

#define MODS_SHIFT  (get_mods() & MOD_MASK_SHIFT)
#define MODS_CTRL   (get_mods() & MOD_MASK_CTRL)
#define MODS_ALT    (get_mods() & MOD_MASK_ALT)

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
#define RGB_DISABLE_WHEN_USB_SUSPENDED true
