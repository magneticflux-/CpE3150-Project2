#include <avr/io.h>
#include <string.h>
#include "commands.h"
#include "presets.h"

#define UCSR1B_ENABLED ((1 << RXEN) | (1 << TXEN) | (1 << RXCIE))

void init_usart()
{
	UBRR1 = UBRR;
	UCSR1C = (1 << UCSZ0) | (1 << UCSZ1);
	
	enable_usart();
}

void enable_usart()
{
	UCSR1B |= UCSR1B_ENABLED;
}

bool disable_usart()
{
	UCSR1B &= ~UCSR1B_ENABLED;
}

void transmit(const char data)
{
	// Wait for empty buffer
	while (!(UCSR1A & (1 << UDRE)));
	
	// Send data
	UDR1 = data;
}

void transmit(const char * data)
{
	// Transmit each character in the buffer
	char d;
	for (uint16_t i = 0; d = data[i], d != '\0'; i++)
	{
		transmit(d);
	}
}

void shellPrompt(const char * data)
{
	transmit("> ");
	transmit(data);
	transmit("\n");
}

void handleCommand(const char * data)
{
	char cbpm [3] = {0};
	int ibpm = 0;
	
	// Echo command to mimic a shell
	shellPrompt(data);
	
	// Ping test response
	if(strcmp(data, "ping") == 0)
	{
		transmit("pong\n");
	}
	else if(strcmp(data, "scale") == 0)
	{
		transmit("Playing a C major scale!\n");
		play_scale();
		transmit("Done playing!\n");
	}
	// Song 1
	else if(strncmp(data, "ode", 3) == 0 && strlen(data) >= 7)
	{
		for(int i = 0; i < 3; i++)
		{
			cbpm[i] = data[i + 4];
		}
		
		ibpm = (100 * (cbpm[0] - 48)) + (10 * (cbpm[1] - 48)) + cbpm[2]; 
		transmit("Playing Ode to Joy\n");
		play_ode(ibpm);
		transmit("Played Ode to Joy\n");
	}
	// Song 2
	else if(strcmp(data, "song2") == 0)
	{
		transmit("Playing song 2...\n");
		transmit("Played song 2!\n");
	}
	// Help response
	else
	{
		// If unknown command, prefix the issue
		if(strcmp(data, "help") != 0)
		{
			transmit("Unknown command \"");
			transmit(data);
			transmit("\"\n");
		}
		
		transmit(
		"Available commands are:\n"
		"ping      - responds\n"
		"scale     - plays a scale\n"
		"ode <bpm> - plays Ode to Joy\n"
		"help      - displays this text\n"
		);
	}
}


ISR(USART1_RX_vect)
{
	static char buffer[BUFFER_SIZE] = {};

	const char data = UDR1;

	strncat(buffer, &data, 1);
	
	if (data == '\n')
	{
		// Strip newline from buffer
		char * const newline = strstr(buffer, "\r\n");
		*newline = '\0';
		
		sei();
		handleCommand(buffer);
		cli();
		
		// Clear
		strcpy(buffer, "");
	}
}
