#include "note.h"

note::note(const char note_in[3])
{
	int key = 0; //numbered piano key n for equation frequency f(n) = 440 * 2^((n-49)/12)
	const float KEY_MULTIPLIER = 1.059463; //2^(1/12)
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
	
	//adjusting for octave
	else
	{
		//note_in[1] is ASCII value not actual number
		key += (((note_in[1] - 49)) * 12);
	}
	
	//n-49 part of equation
	const int exponent = key - 49;
	float temp = KEY_MULTIPLIER;
	
	//2^(1/12)^(n-49)
	if(((exponent) < 0))
	{
		for(int i = 0; i > (exponent + 1); i--)
		{
			temp *= KEY_MULTIPLIER;
		}
		
		temp = 1 / temp;
	}
	
	else if((exponent) > 0)
	{
		for(int i = 0; i < (exponent - 1); i++)
		{
			temp *= KEY_MULTIPLIER;
		}
	}
	
	else
	{
		temp = 1;
	}
	
	frequency = temp * 440;
}

float note::get_frequency()
{
	return frequency;
}
