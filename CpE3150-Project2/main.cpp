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

const static note C("C5");
const static note D("D5");
const static note E("E5");
const static note F("F5");
const static note G("G5");
const static note A("A5");
const static note B("B5");

void initInterrupts()
{
	sei();
}

int main(void)
{
	initUSART();
	
	initSound();
	
	initInterrupts();

	//play_note("C5", 4);
	//play_note("D5", 4);
	//play_note("E5", 4);
	//play_note("F5", 4);
	//play_note("G5", 4);
	//play_note("A5", 4);
	//play_note("B5", 4);
	//play_note("C6", 4);
	//play_note("D6", 4);
	//play_note("C6", 4);
	//play_note("B5", 4);
	//play_note("A5", 4);
	//play_note("G5", 4);
	//play_note("F5", 4);
	//play_note("E5", 4);
	//play_note("D5", 4);
	//play_note("C5", 4 + 16);

	while (true)
	{
		//play_note("C5", 16);
		//delay(16);
	}
}
