#include "main.h"

/**
 * print_rev - fun 4
 * @s: the string
 */

void print_rev(char *s)
{
	int lenth = _strlen(s);

	while (lenth--)
	{
		_putchar(s[lenth]);
	}
	putchar('\n');
}
