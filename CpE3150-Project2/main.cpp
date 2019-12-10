/*
* CpE3150-Project2.cpp
*
* Created: 12/2/2019 1:59:18 PM
* Author : Mitchell
*/

#include <avr/io.h>
#include <avr/interrupt.h>
#include "commands.h"
#include "note.h"
#include "play_note.h"
#include "led.h"
#include "common_notes.h"


void init_interrupts()
{
	sei();
}

int main(void)
{
	enable_usart();
	
	init_sound();
	
	init_leds();

	init_interrupts();
	
	#define MIN_COUNTS 8
	
	play_note("C5", MIN_COUNTS);
	play_note("D5", MIN_COUNTS);
	play_note("E5", MIN_COUNTS);
	play_note("F5", MIN_COUNTS);
	play_note("G5", MIN_COUNTS);
	play_note("A5", MIN_COUNTS);
	play_note("B5", MIN_COUNTS);
	play_note("C6", MIN_COUNTS);
	play_note("D6", MIN_COUNTS);
	play_note("C6", MIN_COUNTS);
	play_note("B5", MIN_COUNTS);
	play_note("A5", MIN_COUNTS);
	play_note("G5", MIN_COUNTS);
	play_note("F5", MIN_COUNTS);
	play_note("E5", MIN_COUNTS);
	play_note("D5", MIN_COUNTS);
	play_note("C5", MIN_COUNTS * 5);

	while (true)
	{
	}
}
