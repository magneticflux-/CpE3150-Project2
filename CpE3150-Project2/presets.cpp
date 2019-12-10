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
	
	char c[3] = {};
	strcpy(c, "C");
	strncat(c, &octave, 1);
	
	char d[3] = {};
	strcpy(d, "D");
	strncat(d, &octave, 1);
	
	char e[3] = {};
	strcpy(e, "E");
	strncat(e, &octave, 1);
	
	char f[3] = {};
	strcpy(f, "F");
	strncat(f, &octave, 1);
	
	char g[3] = {};
	strcpy(g, "G");
	strncat(g, &octave, 1);
	
	play_note(c, 4);
	play_note(e, 4);
	play_note(e, 8);
	delay(4, 16, 120);
	play_note(e, 4);
	play_note(e, 4);
	play_note(e, 8);
	delay(4, 16, 120);
	play_note(e, 4);
	play_note(g, 4);
	play_note(c, 4);
	play_note(d, 2);
	play_note(e, 16);
	delay(4, 16, 120);
	play_note(f, 4);
	play_note(f, 4);
	play_note(f, 4);
	play_note(f, 2);
	play_note(f, 4);
	play_note(e, 4);
	play_note(e, 4);
	play_note(e, 2);
	play_note(e, 2);
	play_note(e, 4);
	play_note(d, 4);
	play_note(d, 4);
	play_note(e, 4);
	play_note(d, 8);
	play_note(g, 8);
	delay(4, 16, 120);
	play_note(e, 4);
	play_note(e, 4);
	play_note(e, 8);
	delay(4, 16, 120);
	play_note(e, 4);
	play_note(e, 4);
	play_note(e, 8);
	delay(4, 16, 120);
	play_note(e, 4);
	play_note(g, 4);
	play_note(c, 4);
	play_note(d, 2);
	play_note(e, 16);
	delay(4, 16, 120);
	play_note(f, 4);
	play_note(f, 4);
	play_note(f, 4);
	play_note(f, 4);
	play_note(f, 4);
	play_note(e, 4);
	play_note(e, 4);
	play_note(e, 2);
	play_note(e, 2);
	play_note(g, 4);
	play_note(g, 4);
	play_note(f, 4);
	play_note(d, 4);
	play_note(c, 16);
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

