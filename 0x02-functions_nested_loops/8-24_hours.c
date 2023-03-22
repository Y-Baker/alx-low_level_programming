#include "main.h"

/**
 * jack_bauer - make an watch
*/

void jack_bauer(void)
{
	int hour = 0, min;

	while (hour < 24)
	{
		min = 0;
		while (min < 60)
		{
			printf("%.2d:%.2d\n", hour, min);
			min++;
		}
		hour++;
	}
}
