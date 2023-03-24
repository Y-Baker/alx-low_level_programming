#include "main.h"

/**
 * more_numbers - print numbers from 1 to 14 ten times
 */

void more_numbers(void)
{
	int t = 10;

	while (t--)
	{
		for (int i = 0; i <= 14; i++)
		{
			printf("%d", i);
		}
		putchar('\n');
	}
}
