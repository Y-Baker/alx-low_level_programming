#include "main.h"

/**
 * print_to_98 - print numbers to 98
 * @n: the input number
 */

void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d", n);
		putchar(',');
		putchar(' ');
		n--;
	}
	while (n <= 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
}
