#include "stats.h"
#include "math.h"
#include "stdio.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
	s.min = NAN;
	s.max = NAN;
	s.average = NAN;
	
	float var = 0;
		if(numberset != nullptr)
		{
			min = numberset[0];
			max = numberset[0];
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
		}
		
	return s;
}
