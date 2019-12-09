/*
* IncFile1.h
*
* Created: 12/7/2019 10:36:16 AM
*  Author: snspzv
*/

#pragma once

#include <avr/io.h>
#include <avr/interrupt.h>
#include "LED_control.h"

void initSound();

void play_note(float freq, int counts, char note_letter);

ISR(TIMER1_COMPA_vect);
