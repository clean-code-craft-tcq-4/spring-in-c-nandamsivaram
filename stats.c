#include "stats.h"
#include "math.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
	s.min = numberset[0];
	s.max = numberset[0];
	float var = 0;
		for(int i = 0; i < setlength ; i++)
		{
			var += numberset[i];
			/**Get the min value**/
			if(s.min > numberset[i] )
				s.min = numberset[i];
			/**Get the max value**/
			if(s.max < numberset[i] )
				s.max = numberset[i];
		}/*end of for loop*/
		s.average = var / setlength;
		
	return s;

}
