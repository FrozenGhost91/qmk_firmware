// Copyright 2023 FrozenGhost91 (@FrozenGhost91)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

//#define TAPPING_TERM 500
//#define PERMISSIVE_HOLD


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
////#define NO_ACTION_LAYER
////#define NO_ACTION_TAPPING
////#define NO_ACTION_ONESHOT

//#define DEBUG_MATRIX_SCAN_RATE

//#define QMK_WAITING_TEST_BUSY_PIN GP8
//#define QMK_WAITING_TEST_YIELD_PIN GP9


#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

/*I2c Settings*/
#define HAL_USE_I2C TRUE
#define I2C_DRIVER I2CD0
#define I2C1_SDA_PIN GP0
#define I2C1_SCL_PIN GP1

/* OLED settings 0.91"*/
#define OLED_DISPLAY_128X32
#include_next <mcuconf.h> // for i2c
#undef RP_I2C_USE_I2C0
#define RP_I2C_USE_I2C0 TRUE
#undef RP_I2C_USE_I2C1
#define RP_I2C_USE_I2C1 FALSE

