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

void vamp_a()
{
	play_note("D6", 4);
	play_note("D6", 8);
	play_note("C6", 4);
	delay(4);
	play_note("B5", 12 + 12);
	
	play_note("D5", 4 + 4);
	play_note("E5", 4);
	play_note("E#5", 4);
	play_note("G5", 4);
	play_note("A5", 12);
	play_note("D5", 4 + 8);
	play_note("A5", 8);
	play_note("G5", 4);
}

void vamp_a1()
{
	vamp_a();
	play_note("C6", 12 + 16);
}

void vamp_a2()
{
	vamp_a();
	play_note("C5", 12 + 16);
}

void vamp_b()
{
	delay(8);
	play_note("D6", 8);
	delay(4);
	play_note("A6", 12);
	play_note("G#6", 4);
	play_note("A6", 4);
	play_note("G#6", 4);
	play_note("E#6", 4);
	delay(16);
	
	play_note("A6", 8);
	play_note("A6", 4);
	play_note("G#6", 4);
	delay(4);
	play_note("G#6", 4);
	play_note("G6", 8);
	play_note("A6", 8);
	play_note("A6", 4);
	play_note("G#6", 4);
	delay(4);
	play_note("G#6", 4);
	play_note("G6", 8);
}

void vamp_c()
{
	play_note("C#6", 12);
	play_note("E6", 4 + 8);
	play_note("A#6", 8);
	
	play_note("A6", 12);
	play_note("E#6", 4 + 8);
	play_note("D6", 8);
}

void vamp_c1()
{
	vamp_c();
	
	play_note("C#6", 12);
	play_note("E6", 4 + 8);
	play_note("A#6", 8);
	
	play_note("A6", 12);
	play_note("D6", 4);
	delay(16);
}

void vamp_c2()
{
	vamp_c();
	
	play_note("E6", 12);
	play_note("G6", 4 + 8);
	play_note("A#6", 8);
	
	play_note("A6", 12);
	play_note("B6", 4 + 8);
	play_note("C#7", 8);
}

void vamp_d()
{
	play_note("D7", 4);
	play_note("D7", 4);
	play_note("D6", 4);
	play_note("D6", 4 + 32 + 12);
	delay(4);
}

void vamp_d1()
{
	vamp_d();
	
	play_note("A#4", 8);
	play_note("A#4", 8);
	
	play_note("D5", 4);
	play_note("E#5", 12);
	
	play_note("C5", 8);
	play_note("C5", 8);
	
	play_note("E5", 4);
	play_note("G5", 12);
}

void vamp_d2()
{
	vamp_d();
	
	play_note("A#4", 8);
	play_note("A#4", 8);
	
	play_note("D5", 4);
	play_note("E#5", 12);
	
	play_note("C5", 8);
	play_note("G4", 8);
	
	play_note("A#3", 4);
	play_note("C4", 12);
}

void vamp()
{
	vamp_a1();
	vamp_a2();
	
	vamp_b();
	vamp_b();
	
	vamp_c1();
	vamp_c2();
	
	vamp_d1();
	vamp_d2();
}
