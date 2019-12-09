/*
 * LED_control.h
 *
 * Created: 12/9/2019 12:27:09 AM
 *  Author: snspz
 */ 


#ifndef LED_CONTROL_H_
#define LED_CONTROL_H_

#define EXP_0 1
#define EXP_1 2
#define EXP_2 4
#define EXP_3 8
#define EXP_4 16
#define EXP_5 32

#include <avr/io.h>


void changeLEDstate(char note);
int get_PORT_position(const int decimal_position);


#endif /* LED_CONTROL_H_ */