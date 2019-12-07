/*
 * IncFile1.h
 *
 * Created: 12/7/2019 10:36:16 AM
 *  Author: snspzv
 */ 


#ifndef PLAY_NOTE_H
#define PLAY_NOTE_H
#include <avr/io.h>
#include <avr/interrupt.h>

void play_note(float freq, int counts);
ISR(TIMER1_COMPA_vect);

#endif 