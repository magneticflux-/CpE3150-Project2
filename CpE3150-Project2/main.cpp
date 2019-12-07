/*
 * CpE3150-Project2.cpp
 *
 * Created: 12/2/2019 1:59:18 PM
 * Author : Mitchell
 */

#include <avr/io.h>
#include <avr/interrupt.h>
#include "commands.h"


void initInterrupts()
{
	sei();
}

int main(void)
{
	// Enable speaker
	//DDRE = 0b00010000;
	
	initUSART();
	
	initInterrupts();

	while (true)
	{
	}
}
