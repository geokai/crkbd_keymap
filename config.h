/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


/*
This file was adapted on 09/03/19
Amended by: George Kaimakis - https://github.com/geokai
*/


#pragma once


/* Select handing configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

/* Select connection mode */
//#define USE_MATRIX_I2C
#define USE_SERIAL_PD2

/* Select display */
#define SSD1306OLED

// #define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200

/* Confugure RGB light effects */
#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
//    #define RGBLIGHT_ANIMATIONS
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
//    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_SNAKE
//    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL

    #define RGBLED_NUM 21
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 8
    #define RGBLIGHT_SAT_STEP 16
    #define RGBLIGHT_VAL_STEP 16
#endif


/* Try to reduce firmware size */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
