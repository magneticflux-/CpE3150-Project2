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

void play_note(float freq, int counts, char note_letter)
{
	// Make it sound right (?)
	freq *= 8;
	
	// Timer1
	TCCR1A = 0x00;
	TCCR1B = (1 << WGM12) | (1 << CS11); // CTC mode, 1 prescale
	OCR1A = TIMER1_FREQ / (freq * 2); // timer counts per output toggle
	TIMSK1 = (1 << OCIE1A); // enable interrupts on compare with OCR1A

	//Turn on LED
	changeLEDstate(note_letter);

	// Timer3
	TCCR3A = 0x00;
	TCCR3B = (1 << WGM32) | (1 << CS32); // CTC mode, 256 prescale
	OCR3A = 7813; // 1/8 second @ 16MHz / 256
	
	for(uint8_t i = 0; i < counts; i++)
	{
		// Wait for match
		while(!(TIFR3 & (1 << OCF3A)));
		// Clear match
		TIFR3 |= (1 << OCF3A);
	}
	
	TCCR1B = 0x00; // turn off
	TCCR3B = 0x00; // turn off
	
	changeLEDstate(note_letter);
}

ISR(TIMER1_COMPA_vect)
{
	PORTE ^= (1 << PORTE4); // toggle speaker
}