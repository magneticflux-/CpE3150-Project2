#include <string.h>
#include "commands.h"

void initUSART()
{
	UBRR1 = UBRR;
	UCSR1B = (1 << RXEN) | (1 << TXEN) | (1 << RXCIE) | (1 << TXCIE);
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
	for (uint8_t i = 0; d = data[i], d != '\0'; i++)
	transmit(d);
}

void handleCommand(const char * data)
{
	if(strcmp(data, "help") == 0)
	{
		transmit("This is the help menu!");
	}
	else
	{
		transmit(data);
	}
}

static char buffer[128];

ISR(USART1_RX_vect)
{
	const char data = UDR1;
	
	if (data == '\n')
	{
		handleCommand(buffer);
		buffer[0] = '\0';
	}
	else
	{
		strncat(buffer, &data, 1);
	}
}
