#include "stdio.h"
#include "stats.h"
#include "Alert.h"


int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{

	if(	computedStats.max > maxThreshold )
	{
			alerters[0]();
			alerters[1]();
	}
	else
	{
		//Do nothing
	}
}

void emailAlerter(void)
{
	emailAlertCallCount++;
}

void ledAlerter(void)
{
	ledAlertCallCount++;
}
