#ifndef NOTE_H
#define NOTE_H
#include <string.h>

//notes must be input in format "D4" or "D#4" or "Db4"

class note
{
	public:
		note(const char note_in[3]);
		float get_frequency();
		
	private:
		float frequency;
	};
	
#endif
