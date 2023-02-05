// Copyright 2022 Rossman360 (@rossmontsinger)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define DIODE_DIRECTION COL2ROW

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 19

//#define MATRIX_ROW_PINS_R { P16, P00, P01, P02 }
//#define MATRIX_COL_PINS_R { P03, P15, P17, P10, P07 }


/* #define RGB_DI_PIN GP12 */


#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0


#define I2C_DRIVER I2CD2
#define I2C1_SDA_PIN D1
#define I2C1_SCL_PIN D0

