/*
 * CpE3150-Project2.cpp
 *
 * Created: 12/2/2019 1:59:18 PM
 * Author : Mitchell
 */ 

#include <avr/io.h>
#include "note.h"
#include "play_note.h"


int main(void)
{
    /* Replace with your application code */
	DDRE = (1<<PORTE4);//speaker
    while (1) 
    {
    }
}

