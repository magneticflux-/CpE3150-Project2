#pragma once

/*
* LED_control.h
*
* Created: 12/9/2019 12:27:09 AM
*  Author: snspz
*/

#include <avr/io.h>

void init_leds();

void toggle_led(char note);
