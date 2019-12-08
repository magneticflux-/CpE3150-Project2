#include "note.h"

note::note(const char note_in[3])
{
	int key = 0; //numbered piano key n for equation frequency f(n) = 440 * 2^((n-49)/12)
	
	//sets key at value for that note in octave 1
	switch(note_in[0])
	{
		case('C'):
		key = 4;
		break;
		
		case('D'):
		key = 6;
		break;
		
		case('E'):
		key = 8;
		break;
		
		case('F'):
		key = 9;
		break;
		
		case('G'):
		key = 11;
		break;
		
		case('A'):
		key = 13;
		break;
		
		case('B'):
		key = 15;
		break;
		
		default:
		key = 4;
		break;
	}
	
	//checking for sharp or flat sign in second position of note
	if(note_in[1] == '#' || note_in[1] == 'b')
	{
		//adjusting for octave, note_in[2] is ASCII value not actual number
		key += (((note_in[2] - 49)) * 12);
		
		//incrementing one key for sharp and decrementing for flat
		if(note_in[1] == '#')
		key++;
		
		else if(note_in[1] == 'b')
		key--;
	}
	
	//adjusting for octave if no sharp or flat sign present
	else
	{
		//note_in[1] is ASCII value not actual number
		key += (((note_in[1] - 49)) * 12);
	}
	
	
	frequency = get_nth_root(key) * 440;
}

float note::get_frequency()
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
	const static float[] ROOTS = {
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
