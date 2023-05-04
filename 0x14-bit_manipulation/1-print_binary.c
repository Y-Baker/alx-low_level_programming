#include "main.h"

/**
 * print_binary - print in binary format
 * @n: the decimal value
*/

void print_binary(unsigned long int n)
{
	int i, state = 0;
	unsigned long int present;

	for (i = 63; i >= 0; i--)
	{
		present = n >> i;

		if (present & 1)
		{
			_putchar('1');
			state++;
		}
		else if (state)
			_putchar('0');
	}
	if (!state)
		_putchar('0');
}
