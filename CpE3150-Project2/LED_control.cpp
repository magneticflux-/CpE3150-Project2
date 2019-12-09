/*
 * LED_control.cpp
 *
 * Created: 12/9/2019 12:27:21 AM
 *  Author: snspz
 */ 
#include "LED_control.h"

void changeLEDstate(char note)
{
	int to_change = 0;
	
	//G corresponds to LED5 (PE5)
	if(note == 'G')
	{
		PORTE ^= EXP_5;
	}
	
	//A and B correspond to LEDs 6 and 7 (PD4 and PD5)
	 else 
	 {
		if(note == 'A' || note == 'B')
		{
			to_change = get_PORT_position(note - 61);
		}
	
		//C-F correspond to LEDs 0-4, PD0-3	
		else
		{
			to_change = get_PORT_position(note - 67);
		}
		
		PORTD ^= to_change;
	 }

	return;
}

int get_PORT_position(const int decimal_position)
{
	const static int EXPS[] = {
		EXP_0,
		EXP_1,
		EXP_2,
		EXP_3,
		EXP_4,
		EXP_5,
	};
	
	return EXPS[decimal_position];
}