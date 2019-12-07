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
		float get_n_root(int n);
		const float roots[49] = {
			1,
			1.059463094,
			1.224620,
			1.189207,
			1.259921,
			1.334839,
			1.414213,
			1.498307,
			1.587401,
			1.681792,
			1.781797,
			1.887748,
			1.999999,
			2.118926,
			2.244924,
			2.378414,
			2.519842,
			2.669679,
			2.828427,
			2.996614,
			3.174802,
			3.363585,
			3.563594,
			3.775497,
			3.999999,
			4.237852,
			4.489848,
			4.756828,
			5.039684,
			5.339359,
			5.656854,
			5.993228,
			6.349604,
			6.727171,
			7.127189,
			7.550994,
			7.999999,
			8.475704,
			8.979696,
			9.513656,
			10.07936,
			10.67871,
			11.31370,
			11.98645,
			12.69920,
			13.45434,
			14.25437,
			15.10198,
			15.99999,
		};
	};
	
#endif