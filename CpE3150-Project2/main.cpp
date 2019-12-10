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

	while (true)
	{
	}
}
