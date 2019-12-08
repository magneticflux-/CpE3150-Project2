#include <avr/io.h>
#include <string.h>
#include "commands.h"

void initUSART()
{
	UBRR1 = UBRR;
	UCSR1B = (1 << RXEN) | (1 << TXEN) | (1 << RXCIE);
	UCSR1C = (1 << UCSZ0) | (1 << UCSZ1);
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
	// Echo command to mimic a shell
	shellPrompt(data);
	
	// Ping test response
	if(strcmp(data, "ping") == 0)
	{
		transmit("pong\n");
	}
	// Song 1
	else if(strcmp(data, "song1") == 0)
	{
		transmit("Playing song 1...\n");
		transmit("Played song 1!\n");
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
		"ping  - responds\n"
		"song1 - plays song 1\n"
		"song2 - plays song 2\n"
		"help  - displays this text\n"
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
		
		handleCommand(buffer);
		
		// Clear
		strcpy(buffer, "");
	}
}