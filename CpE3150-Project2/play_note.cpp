/*
* CPPFile1.cpp
*
* Created: 12/7/2019 10:36:30 AM
*  Author: snspzv
*/
#include <avr/io.h>
#include "play_note.h"

#define TIMER1_FREQ 16000000

void initSound()
{
	// Enable speaker
	DDRE = (1 << PORTE4);
}

void play_note(float freq, float counts, int bpm)
{
	// Make it sound right (?)
	freq *= 8;
	
	// Timer1
	TCCR1A = 0x00;
	TCCR1B = (1 << WGM12) | (1 << CS11); // CTC mode, 1 prescale
	OCR1A = TIMER1_FREQ / (freq * 2); // timer counts per output toggle
	TIMSK1 = (1 << OCIE1A); // enable interrupts on compare with OCR1A

	// Timer3
	TCCR3A = 0x00;
	TCCR3B = (1 << WGM32) | (1 << CS32); // CTC mode, 256 prescale
	OCR3A = (bpm / 240) * counts; //bpm / 60 sec = bps, bps / 4 = length of quarter note (works for 4/4 time)
	
	while(!(TIFR3 & (1 << OCF3A)));

	TIFR3 |= (1 << OCF3A);
	
	TCCR1B = 0x00; // turn off
	TCCR3B = 0x00; // turn off
}

ISR(TIMER1_COMPA_vect)
{
	PORTE ^= (1 << PORTE4); // toggle speaker
}