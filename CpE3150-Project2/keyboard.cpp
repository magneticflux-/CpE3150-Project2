#include "keyboard.h"
#include "note.h"
#include "play_note.h"
using namespace std;

void keyboard()
{
	DDRA = 0b00000000;
	PORTA = 0b11111111;
	DDRD = 0b11111111;
	
	char note[3];
	
	if(~PINA & (1<<PINA0)) // switch 1
	{
		note[] = {'C','4'};
		note->note(note[]);
		play_note(note->get_frequency(), 4)
		PORTD = 0b11111110;
		while(~PINA & (1<<PINA0)); //avoid debouncing
	}
	
	if(~PINA & (1<<PINA1)) // switch 2
	{
		note[] = {'D','4'};
		note->note(note[]);
		play_note(note->get_frequency(), 4);
		PORTD = 0b11111101;
		while(~PINA & (1<<PINA1)); //avoid debouncing
	}
	
	if(~PINA & (1<<PINA2)) //switch 3
	{
		note[] = {'E','4'};
		note->note(note[]);
		play_note(note->get_frequency(), 4);
		PORTD = 0b11111011;
		while(~PINA & (1<<PINA2)); //avoid debouncing
	}
	return 0;
}
