/*
* LED_control.cpp
*
* Created: 12/9/2019 12:27:21 AM
*  Author: snspz
*/
#include "led.h"

void init_leds()
{
	DDRD |= 0xFF;
	PORTD |= 0xFF;
}

void toggle_led(char note)
{
	switch (note)
	{
		case 'C':
		PORTD ^= (1 << PORTD0);
		PORTD ^= (1 << PORTD7);
		break;
		
		case 'D':
		PORTD ^= (1 << PORTD1);
		break;
		
		case 'E':
		PORTD ^= (1 << PORTD2);
		break;
		
		case 'F':
		PORTD ^= (1 << PORTD3);
		break;
		
		case 'G':
		PORTD ^= (1 << PORTD4);
		break;
		
		case 'A':
		PORTD ^= (1 << PORTD5);
		break;
		
		case 'B':
		PORTD ^= (1 << PORTD6);
		break;
	}
}
