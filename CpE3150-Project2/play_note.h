#pragma once

/*
* IncFile1.h
*
* Created: 12/7/2019 10:36:16 AM
*  Author: snspzv
*/

#include <avr/io.h>
#include <avr/interrupt.h>
#include "note.h"

#define DEFAULT_CPB 16
#define DEFAULT_BPM 120

void init_sound();

void delay(int counts, int cpb = DEFAULT_CPB, int bpm = DEFAULT_BPM);

void start_note(float freq, float duty = 0.5);

void stop_note();

void play_note(const char note_name[3], int counts, int cpb = DEFAULT_CPB, int bpm = DEFAULT_BPM);

void play_note(note note, int counts, int cpb = DEFAULT_CPB, int bpm = DEFAULT_BPM);

void play_note(float freq, int counts, int cpb = DEFAULT_CPB, int bpm = DEFAULT_BPM);

ISR(TIMER1_COMPA_vect);

ISR(TIMER1_OVF_vect);
