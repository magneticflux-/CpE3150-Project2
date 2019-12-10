#include "keyboard.h"
#include "note.h"
#include "play_note.h"
#include "led.h"

void init_keyboard()
{
	DDRA = 0b00000000;
	PORTA = 0b11111111;
}

void check_keyboard()
{
	if(~PINA & (1<<PINA0)) // switch 1
	{
		play_note("C5", 4);
	}
	
	if(~PINA & (1<<PINA1)) // switch 2
	{
		play_note("D5", 4);
	}
	
	if(~PINA & (1<<PINA2)) //switch 3
	{
		play_note("E5", 4);
	}
	
	if(~PINA & (1<<PINA3)) //switch 4
	{
		play_note("F5", 4);
	}
	
	if(~PINA & (1<<PINA4)) //switch 5
	{
		play_note("G5", 4);
	}
	
	if(~PINA & (1<<PINA5)) //switch 6
	{
		play_note("A5", 4);
	}
	
	if(~PINA & (1<<PINA6)) //switch 7
	{
		play_note("B5", 4);
	}

	if(~PINA & (1<<PINA7)) //switch 8
	{
		play_note("C6", 4);
	}
}
