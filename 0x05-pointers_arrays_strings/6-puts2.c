#include "main.h"

/**
 * puts2 - the fun 6
 * @str: the input string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	putchar('\n');
}
