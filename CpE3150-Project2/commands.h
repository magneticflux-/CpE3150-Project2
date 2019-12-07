#pragma once

#define FOSC 16000000.0 // Clock Speed
#define BAUD 9600.0
#define UBRR ((FOSC / (16 * BAUD)) - 1)

void initUSART();

void transmit(uint8_t data);

void transmit(const char * data);

void handleCommand(const char * data);

ISR(USART1_RX_vect);
