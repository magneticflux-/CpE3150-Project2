#pragma once

#include <avr/interrupt.h>

#define FOSC 16000000.0 // Clock Speed
#define BAUD 9600.0
#define UBRR ((FOSC / (16 * BAUD)) - 1)
#define BUFFER_SIZE 512 // Command buffer capacity

void enable_usart();

void disable_usart();

void transmit(uint8_t data);

void transmit(const char * data);

void handleCommand(const char * data);

ISR(USART1_RX_vect);
