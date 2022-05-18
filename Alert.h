#define NO_OF_ALERTS 2

extern int emailAlertCallCount;
extern int ledAlertCallCount;

typedef void (*alerter_funcptr)(void);

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
void emailAlerter(void);
void ledAlerter(void);
