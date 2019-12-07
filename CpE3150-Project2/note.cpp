#include "note.h"

note::note(const char note_in[3])
{
	float test_freq = 1.0;
	int key = 0;
	const float KEY_MULTIPLIER = 1.059463;
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
	
	//int test3 = note_in[1];
	if(note_in[1] == '#' || note_in[1] == 'b')
	{
		key += (((note_in[2] - 49)) * 12);
	}
	
	else
	{
		key += (((note_in[1] - 49)) * 12);
	}
	
	if(note_in[2] != '\0')
	{
		if(note_in[1] == '#')
			key++;
		
		else if(note_in[1] == 'b')
			key--;
	}
	const int exponent = key - 49;
	float temp = KEY_MULTIPLIER;
	
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