#include "main.h"

/**
 * print_rev - fun 4
 * @s: the string
 */

void print_rev(char *s)
{
	int lenth = _strlen(s);

	for (int i = lenth; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	putchar('\n');
}
