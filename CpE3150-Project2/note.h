#ifndef NOTE_H
#define NOTE_H
#include <string.h>

class note
{
	public:
		note(const char note_in[3]);
		float get_frequency();
		
	private:
		float frequency;
	};
	
#endif