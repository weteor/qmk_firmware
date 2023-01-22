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


#define MATRIX_ROW_PINS { GP28, GP20, GP2, GP5, GP9, GP29, GP22, GP3, GP4, GP8 }
#define MATRIX_COL_PINS { GP1, GP0, GP26, GP27, GP21, GP23 }


#define ENCODERS_PAD_A { GP7 }
#define ENCODERS_PAD_B { GP6 }



/*
#define MATRIX_ROW_PINS { F5, B3, D1, C6, B5, F4, B1, D0, D4, B4 }
#define MATRIX_COL_PINS { D2, D3, F7, F6, B6, B2 }

#define ENCODERS_PAD_A { D7 }
#define ENCODERS_PAD_B { E6 }
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
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#define TAP_CODE_DELAY 10
#define RP2040_FLASH_GENERIC_03H

