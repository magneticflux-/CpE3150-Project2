#include "keyboard.h"
#include "note.h"
#include "play_note.h"
#include "led.h"
using namespace std;

void keyboard()
{
	DDRA = 0b00000000;
	PORTA = 0b11111111;
	
	char note[3];
	
	if(~PINA & (1<<PINA0)) // switch 1
	{
		note[] = {'C','5'};
		note(note[]);
		play_note(get_frequency(), 4)
		toggle_led(get_note_letter());
		while(~PINA & (1<<PINA0)); //avoid debouncing
	}
	
	if(~PINA & (1<<PINA1)) // switch 2
	{
		note[] = {'D','5'};
		note(note[]);
		play_note(get_frequency(), 4);
		toggle_led(get_note_letter());
		while(~PINA & (1<<PINA1)); //avoid debouncing
	}
	
	if(~PINA & (1<<PINA2)) //switch 3
	{
		note[] = {'E','5'};
		note(note[]);
		play_note(get_frequency(), 4);
		toggle_led(get_note_letter());
		while(~PINA & (1<<PINA2)); //avoid debouncing
	}
	
	if(!PINA & (1<<PINA3)) //switch 4
	{
		note[] = {'F','5'};
		note(note[]);
		play_note(get_frequency(), 4);
		toggle_led(get_note_letter());
		while(~PINA & (1<<PINA3)); //avoid debouncing
	}
	
	if(~PINA & (1<<PINE6)) //switch 5
	{
		note[] = {'G','5'};
		note(note[]);
		play_note(get_frequency(), 4);
		toggle_led(get_note_letter());
		while(~PINA & (1<<PINE6)); // avoid debouncing
	}
	
	if(~PINA & (1<<PINA4)) //switch 6
	{
		note[] = {'A','5'};
		note(note[]);
		play_note(get_frequency(), 4);
		toggle_led(get_note_letter());
		while(~PINA & (1<<PINA4)); // avoid debouncing
	}
	
	if(~PINA & (1<<PINA5)) //switch 7
	{
		note[] = {'B','5'};
		note(note[]);
		play_note(get_frequency(), 4);
		toggle_led(get_note_letter());
		while(~PINA & (1<<PINA5)); //avoid debouncing
	}
	return 0;
}
