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

int main(void)
{
	initUSART();
	
	initSound();
	
	initInterrupts();

	//play_note(note("C7").get_frequency(), 16);

	while (true)
	{
	}
}
