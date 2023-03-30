#include "main.h"

/**
 * print_rev - fun 4
 * @s: the string
 */

void print_rev(char *s)
{
	int lenth = 0;
	
	while (s[lenth])
	{
		lenth++;
	}
	while (lenth--)
	{
		_putchar(s[lenth]);
	}
	putchar('\n');
}
