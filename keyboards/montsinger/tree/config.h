// Copyright 2022 Rossman360 (@rossmontsinger)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define VENDOR_ID 0x1234
#define PRODUCT_ID 0x5678
#define DEVICE_VER 0x0001


/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

#define DIODE_DIRECTION ROW2COL

#define MATRIX_ROW_PINS { GP1, GP28, GP7, GP9, GP4, GP0, GP29, GP6, GP8, GP5 }
#define MATRIX_COL_PINS { GP27, GP26, GP23, GP21, GP2, GP3 }

#define ENCODERS_PAD_A { GP22 }
#define ENCODERS_PAD_B { GP20 }

/* AVR pins
#define MATRIX_ROW_PINS { D2, F5, E6, B5, D4, D3, F4, D7, B4, C6 }
#define MATRIX_COL_PINS { F6, F7, B2, B6, D1, D0 }

#define ENCODERS_PAD_A { B1 }
#define ENCODERS_PAD_B { B3 }
*/




/* #define RGB_DI_PIN GP12 */


#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#define TAP_CODE_DELAY 10
#define RP2040_FLASH_GENERIC_03H

