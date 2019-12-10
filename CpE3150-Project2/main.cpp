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
#include "common_notes.h"


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
	}
}
