/*
* IncFile1.h
*
* Created: 12/7/2019 10:36:16 AM
*  Author: snspzv
*/

#pragma once

#include <avr/io.h>
#include <avr/interrupt.h>

void initSound();

void play_note(float freq, float counts, int bpm);

ISR(TIMER1_COMPA_vect);
