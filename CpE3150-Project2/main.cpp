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

const static note C("C4");
const static note D("D4");
const static note E("E4");
const static note F("F4");
const static note G("G4");
const static note A("A4");
const static note B("B4");

void initInterrupts()
{
	sei();
}

void initLEDS()
{
	DDRD |= 0b00111111;
	PORTD |= 0b00111111;
	
	DDRE |= (1<<PORTE5);
	DDRE |= (1<<PORTE5);
}

int main(void)
{
	initUSART();
	
	initSound();
	
	initInterrupts();
	
	initLEDS();

	note test("C4");
	play_note(test.get_frequency(), 16, test.get_note_letter());

	if(true)
	{
		DDRD  = 0x00;
	}
	while (true)
	{
	}
}
