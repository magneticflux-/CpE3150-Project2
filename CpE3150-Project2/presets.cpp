/* 
* presets.cpp
*
* Created: 12/9/2019 4:00:31 PM
* Author: snspz
*/

#include "play_note.h"
#include "common_notes.h"

void play_ode(int bpm)
{
	play_note(E, 4, 16, bpm);
	play_note(E, 4, 16, bpm);
	play_note(F, 4, 16, bpm);
	play_note(G, 4, 16, bpm);
	play_note(G, 4, 16, bpm);
	play_note(F, 4, 16, bpm);
	play_note(E, 4, 16, bpm);
	play_note(D, 4, 16, bpm);
	play_note(C, 4, 16, bpm);
	play_note(C, 4, 16, bpm);
	play_note(D, 4, 16, bpm);
	play_note(E, 4, 16, bpm);
	play_note(E, 6, 16, bpm);
	play_note(D, 2, 16, bpm);
	play_note(D, 8, 16, bpm);
	play_note(E, 4, 16, bpm);
	play_note(E, 4, 16, bpm);
	play_note(F, 4, 16, bpm);
	play_note(G, 4, 16, bpm);
	play_note(G, 4, 16, bpm);
	play_note(F, 4, 16, bpm);
	play_note(E, 4, 16, bpm);
	play_note(D, 4, 16, bpm);
	play_note(C, 4, 16, bpm);
	play_note(C, 4, 16, bpm);
	play_note(D, 4, 16, bpm);
	play_note(E, 4, 16, bpm);
	play_note(D, 6, 16, bpm);
	play_note(C, 2, 16, bpm);
	play_note(C, 8, 16, bpm);
	play_note(D, 4, 16, bpm);
	play_note(D, 4, 16, bpm);
	play_note(E, 4, 16, bpm);
	play_note(C, 4, 16, bpm);
	play_note(D, 4, 16, bpm);
	play_note(E, 2, 16, bpm);
	play_note(F, 2, 16, bpm);
	play_note(E, 4, 16, bpm);
	play_note(C, 4, 16, bpm);
	play_note(D, 4, 16, bpm);
	play_note(E, 2, 16, bpm);
	play_note(F, 2, 16, bpm);
	play_note(E, 4, 16, bpm);
	play_note(D, 4, 16, bpm);
	play_note(C, 4, 16, bpm);
	play_note(D, 4, 16, bpm);
	play_note("G4", 4, 16, bpm);
	play_note(E, 4, 16, bpm);
	play_note(E, 4, 16, bpm);
	play_note(E, 4, 16, bpm);
	play_note(F, 4, 16, bpm);
	play_note(G, 4, 16, bpm);
	play_note(F, 4, 16, bpm);
	play_note(E, 4, 16, bpm);
	play_note(D, 4, 16, bpm);
	play_note(C, 4, 16, bpm);
	play_note(C, 4, 16, bpm);
	play_note(D, 4, 16, bpm);
	play_note(E, 4, 16, bpm);
	play_note(D, 6, 16, bpm);
	play_note(C, 2, 16, bpm);
	play_note(C, 8, 16, bpm);
}

void play_jingle(char up_or_down)
{
	char octave;
	if(up_or_down == '+')
	{
		octave = '6';
	}
	else if(up_or_down == '-')
	{
		octave = '4';
	}
	else
	{
		octave = '5';
	}
	
	play_note("'E'+octave",4);
	play_note("'E'+octave",4);
	play_note("'E'+octave",8);
	delay(4,16,120);
	play_note("'E'+octave",4);
	play_note("'E'+octave",4);
	play_note("'E'+octave",8);
	delay(4,16,120);
	play_note("'E'+octave",4);
	play_note("'G'+octave",4);
	play_note("'C'+octave",4);
	play_note("'D'+octave",2);
	play_note("'E'+octave",16);
	delay(4,16,120);
	play_note("'F'+octave",4);
	play_note("'F'+octave",4);
	play_note("'F'+octave",4);
	play_note("'F'+octave",2);
	play_note("'F'+octave",4);
	play_note("'E'+octave",4);
	play_note("'E'+octave",4);
	play_note("'E'+octave",2);
	play_note("'E'+octave",2);
	play_note("'E'+octave",4);
	play_note("'D'+octave",4);
	play_note("'D'+octave",4);
	play_note("'E'+octave",4);
	play_note("'D'+octave",8);
	play_note("'G'+octave",8);
	delay(4,16,120);
	play_note("'E'+octave",4);
	play_note("'E'+octave",4);
	play_note("'E'+octave",8);
	delay(4,16,120);
	play_note("'E'+octave",4);
	play_note("'E'+octave",4);
	play_note("'E'+octave",8);
	delay(4,16,120);
	play_note("'E'+octave",4);
	play_note("'G'+octave",4);
	play_note("'C'+octave",4);
	play_note("'D'+octave",2);
	play_note("'E'+octave",16);
	delay(4,16,120);
	play_note("'F'+octave",4);
	play_note("'F'+octave",4);
	play_note("'F'+octave",4);
	play_note("'F'+octave",4);
	play_note("'F'+octave",4);
	play_note("'E'+octave",4);
	play_note("'E'+octave",4);
	play_note("'E'+octave",2);
	play_note("'E'+octave",2);
	play_note("'G'+octave",4);
	play_note("'G'+octave",4);
	play_note("'F'+octave",4);
	play_note("'D'+octave",4);
	play_note("'C'+octave",16);
}

void play_scale()
{
	#define MIN_COUNTS 4

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
}

