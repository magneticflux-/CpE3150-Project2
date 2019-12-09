#include <avr/io.h>
#include "note.h"

note::note(const char note_in[3])
{
	// Reference: https://en.wikipedia.org/wiki/Scientific_pitch_notation#Table_of_note_frequencies

	uint8_t key = 0; // MIDI note number
	
	note_letter = note_in[0];
	
	//sets key at value for that note in octave 1
	switch(note_in[0])
	{
		case('C'):
		key = 12;
		break;
		
		case('D'):
		key = 14;
		break;
		
		case('E'):
		key = 16;
		break;
		
		case('F'):
		key = 17;
		break;
		
		case('G'):
		key = 19;
		break;
		
		case('A'):
		key = 21;
		break;
		
		case('B'):
		key = 23;
		break;
	}
	
	//checking for sharp or flat sign in second position of note
	if(note_in[1] == '#' || note_in[1] == 'b')
	{
		//adjusting for octave, note_in[2] is ASCII value not actual number
		key += (note_in[2] - 48) * 12;
		
		//incrementing one key for sharp and decrementing for flat
		if(note_in[1] == '#')
		{
			key++;
		}
		
		else if(note_in[1] == 'b')
		{
			key--;
		}
	}
	//adjusting for octave if no sharp or flat sign present
	else
	{
		//note_in[1] is ASCII value not actual number
		key += (note_in[1] - 48) * 12;
	}
	
	// Convert from MIDI number to frequency
	frequency = 440 * get_nth_root(key - 69);
}

float note::get_frequency() const
{
	return frequency;
}


/**
* \brief Computes 2^(n/12)
*
* \param n the exponent factor
*
* \return float the result
*/
float get_nth_root(const int16_t n)
{
	const static float ROOTS[] = {
		ROOT_0,
		ROOT_1,
		ROOT_2,
		ROOT_3,
		ROOT_4,
		ROOT_5,
		ROOT_6,
		ROOT_7,
		ROOT_8,
		ROOT_9,
		ROOT_10,
		ROOT_11
	};

	if (n >= 12)
	{
		return 2 * get_nth_root(n - 12);
	}
	else if (n >= 0)
	{
		return ROOTS[n];
	}
	else
	{
		return 1 / get_nth_root(-n);
	}
}


char note::get_note_letter() const
{
	return note_letter;
}