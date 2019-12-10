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

void play_jingle()
{
	play_note(E,4);
	play_note(E,4);
	play_note(E,8);
	delay(4,16,120);
	play_note(E,4);
	play_note(E,4);
	play_note(E,8);
	delay(4,16,120);
	play_note(E,4);
	play_note(G,4);
	play_note(C,4);
	play_note(D,2);
	play_note(E,16);
	delay(4,16,120);
	play_note(F,4);
	play_note(F,4);
	play_note(F,4);
	play_note(F,2);
	play_note(F,4);
	play_note(E,4);
	play_note(E,4);
	play_note(E,2);
	play_note(E,2);
	play_note(E,4);
	play_note(D,4);
	play_note(D,4);
	play_note(E,4);
	play_note(D,8);
	play_note(G,8);
	delay(4,16,120);
	play_note(E,4);
	play_note(E,4);
	play_note(E,8);
	delay(4,16,120);
	play_note(E,4);
	play_note(E,4);
	play_note(E,8);
	delay(4,16,120);
	play_note(E,4);
	play_note(G,4);
	play_note(C,4);
	play_note(D,2);
	play_note(E,16);
	delay(4,16,120);
	play_note(F,4);
	play_note(F,4);
	play_note(F,4);
	play_note(F,4);
	play_note(F,4);
	play_note(E,4);
	play_note(E,4);
	play_note(E,2);
	play_note(E,2);
	play_note(G,4);
	play_note(G,4);
	play_note(F,4);
	play_note(D,4);
	play_note(C,16);
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

