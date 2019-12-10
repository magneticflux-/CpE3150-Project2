/*
* CPPFile1.cpp
*
* Created: 12/7/2019 10:36:30 AM
*  Author: snspzv
*/

#include <avr/io.h>
#include "play_note.h"
#include "note.h"
#include "led.h"

#define CPU_FREQ 16000000

#define TIMER1_FREQ (CPU_FREQ / 1)
#define TIMER3_FREQ (CPU_FREQ / 64)

void init_sound()
{
	// Enable speaker
	DDRE |= (1 << DDRE4);
}

void delay(int counts, int cpb, int bpm)
{
	// Clock ticks per count
	//        tpc = (seconds per count)  / (seconds per tick)
	//        tpc = (ticks per second)   / (counts per second)
	//        tpc = freq                 / (counts per minute / 60)
	//        tpc = (freq * 60)          / (counts per minute)
	//        tpc = (freq * 60)          / (counts per beat * beats per minute)
	const int tpc = (TIMER3_FREQ * 60.0) / (cpb * bpm);
	
	// Timer3
	TCCR3A = 0x00;
	TCCR3B = (1 << WGM32) | (1 << CS31) | (1 << CS30); // CTC mode, 64 prescale
	OCR3A = tpc;
	
	for (int i = 0; i < counts; i++)
	{
		// Delay for one count
		while(!(TIFR3 & (1 << OCF3A)));
		// Reset compare match
		TIFR3 |= (1 << OCF3A);
	}
	
	TCCR3B = 0x00; // turn off
}

void start_note(float freq, float duty)
{
	// Make it sound right (?)
	// Found by comparison to known tones
	// Probably adjusting for speaker and square wave characteristics
	freq *= 8;
	
	// Timer1
	TCCR1A = (1 << WGM11); // Fast PWM, TOP = ICR3
	TCCR1B = (1 << WGM13) | (1 << WGM12) | (1 << CS11); // CTC mode, 1 prescale
	
	// ticks per PWM period
	const float tpp = TIMER1_FREQ / freq;
	ICR1 = tpp;
	
	OCR1A = tpp * duty;
	
	// OCIE1A and TOIE1 interrupt enable
	// OCIE1A controls duty cycle
	// TOIE1 controls overall period
	TIMSK1 = (1 << OCIE1A) | (1 << TOIE1);
}

void stop_note()
{
	TCCR1B = 0x00; // turn off
}


void play_note(const char note_name[3], int counts, int cpb, int bpm)
{
	play_note(note(note_name), counts, cpb, bpm);
}

void play_note(note note, int counts, int cpb, int bpm)
{
	// Toggle LED
	toggle_led(note.get_note_letter());
	play_note(note.get_frequency(), counts, cpb, bpm);

	// Toggle LED
	toggle_led(note.get_note_letter());
}

void play_note(float freq, int counts, int cpb, int bpm)
{
	counts *= 3;
	cpb *= 3;
	
	start_note(freq, 1 / 2.0);
	
	delay(counts - 1, cpb, bpm);
	
	start_note(freq, 0.0);
	
	delay(1, cpb, bpm);
	
	stop_note();
}

ISR(TIMER1_COMPA_vect)
{
	PORTE |= (1 << PORTE4); // Speaker high
}

ISR(TIMER1_OVF_vect)
{
	PORTE &= !(1 << PORTE4); // Speaker low
}
