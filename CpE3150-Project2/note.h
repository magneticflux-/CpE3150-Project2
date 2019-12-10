#pragma once

#include <inttypes.h>
#include <string.h>

#define ROOT_0 1
#define ROOT_1 1.059463094359295264561825294946341700779204317494185628559
#define ROOT_2 ROOT_1 * ROOT_1
#define ROOT_3 ROOT_2 * ROOT_1
#define ROOT_4 ROOT_3 * ROOT_1
#define ROOT_5 ROOT_4 * ROOT_1
#define ROOT_6 ROOT_5 * ROOT_1
#define ROOT_7 ROOT_6 * ROOT_1
#define ROOT_8 ROOT_7 * ROOT_1
#define ROOT_9 ROOT_8 * ROOT_1
#define ROOT_10 ROOT_9 * ROOT_1
#define ROOT_11 ROOT_10 * ROOT_1

//notes must be input in format "D4" or "D#4" or "Db4"

class note
{
	public:
	note(const char note_in[3]);
	float get_frequency() const;
	
	private:
	float frequency;
};

float get_nth_root(const int16_t n);
