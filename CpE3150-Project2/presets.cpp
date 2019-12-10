/*
* presets.cpp
*
* Created: 12/9/2019 4:00:31 PM
* Author: snspz
*/


#include "presets.h"


void play_ode(int bpm)
{
	play_note(E, 4,16,bpm);
	play_note(E, 4,16,bpm);
	play_note(F, 4,16,bpm);
	play_note(G, 4,16,bpm);
	play_note(G, 4,16,bpm);
	play_note(F, 4,16,bpm);
	play_note(E, 4,16,bpm);
	play_note(D, 4,16,bpm);
	play_note(C, 4,16,bpm);
	play_note(C, 4,16,bpm);
	play_note(D, 4,16,bpm);
	play_note(E, 4,16,bpm);
	play_note(E, 6,16,bpm);
	play_note(D, 2,16,bpm);
	play_note(D, 8,16,bpm);
	play_note(E, 4,16,bpm);
	play_note(E, 4,16,bpm);
	play_note(F, 4,16,bpm);
	play_note(G, 4,16,bpm);
	play_note(G, 4,16,bpm);
	play_note(F, 4,16,bpm);
	play_note(E, 4,16,bpm);
	play_note(D, 4,16,bpm);
	play_note(C, 4,16,bpm);
	play_note(C, 4,16,bpm);
	play_note(D, 4,16,bpm);
	play_note(E, 4,16,bpm);
	play_note(D, 6,16,bpm);
	play_note(C, 2,16,bpm);
	play_note(C, 8,16,bpm);
	play_note(D, 4,16,bpm);
	play_note(D, 4,16,bpm);
	play_note(E, 4,16,bpm);
	play_note(C, 4,16,bpm);
	play_note(D, 4,16,bpm);
	play_note(E, 2,16,bpm);
	play_note(F, 2,16,bpm);
	play_note(E, 4,16,bpm);
	play_note(C, 4,16,bpm);
	play_note(D, 4,16,bpm);
	play_note(E, 2,16,bpm);
	play_note(F, 2,16,bpm);
	play_note(E, 4,16,bpm);
	play_note(D, 4,16,bpm);
	play_note(C, 4,16,bpm);
	play_note(D, 4,16,bpm);
	delay(4, 16, bpm);
	play_note(E, 4,16,bpm);
	play_note(E, 4,16,bpm);
	play_note(E, 4,16,bpm);
	play_note(F, 4,16,bpm);
	play_note(G, 4,16,bpm);
	play_note(F, 4,16,bpm);
	play_note(E, 4,16,bpm);
	play_note(D, 4,16,bpm);
	play_note(C, 4,16,bpm);
	play_note(C, 4,16,bpm);
	play_note(D, 4,16,bpm);
	play_note(E, 4,16,bpm);
	play_note(D, 6,16,bpm);
	play_note(C, 2,16,bpm);
	play_note(C, 8,16,bpm);
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

