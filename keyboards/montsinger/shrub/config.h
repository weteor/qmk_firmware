// Copyright 2022 Rossman360 (@rossmontsinger)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define DIODE_DIRECTION ROW2COL


#define MATRIX_ROW_PINS { GP20, GP4, GP2, GP23, GP22, GP27, GP29, GP1 }
#define MATRIX_COL_PINS { GP0, GP3, GP5, GP6, GP7, GP8, GP9 }

#define ENCODERS_PAD_A { GP26 }
#define ENCODERS_PAD_B { GP28 }


/* AVR pins
#define MATRIX_ROW_PINS { B3, D4, D1, B2, B1, F6, F4, D2 }
#define MATRIX_COL_PINS { D3, D0, C6, D7, E6, B4, B5 }

#define ENCODERS_PAD_A { F7 }
#define ENCODERS_PAD_B { F5 }
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

