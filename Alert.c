#include "stats.h"
#include "Alert.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void check_and_alert(float maxThreshold, alerter_funcptr alerters, struct Stats computedStats)
{

	if(	computedStats.max > maxThreshold )
	{
		for( int i = 0 ; i < 2 ; i++ )
		{
			(*alerters[i])();
		}

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