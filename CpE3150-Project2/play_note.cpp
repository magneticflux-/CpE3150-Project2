/*
* CPPFile1.cpp
*
* Created: 12/7/2019 10:36:30 AM
*  Author: snspzv
*/
#include "play_note.h"


void play_note(float freq, int counts)
{
	sei();
	const double TIMER_PERIOD_A = 0.000000063;
	TCCR1A = 0x00; //normal operation/CTC
	TCCR1B = (1<<WGM12);//CTC mode
	OCR1A = (1/freq) / TIMER_PERIOD_A;//timer for speaker wave
	
	TCCR3A = 0x00;//normal operation/CTC
	TCCR3B = (1<<CS32) | (1<<WGM32);//256 prescaler and CTC mode
	OCR3A = 15625;//quarter second
	
	TIMSK1 = (1<<OCIE1A);//enable interrupts on compare with OCR1A
	for(int i = 0; i < counts; i++)
	{
		while(TIFR3 ^ (1<<OCF3A));
	}
	
	TCCR1B = 0x00;//turn off
	TCCR3B = 0x00;//turn off
	cli();
}

ISR(TIMER1_COMPA_vect)
{
	PORTE ^= (1<<PORTE4);//toggle speaker
}