#include "main.h"

/**
 * _puts_recursion - function to print string
 * @s: the string
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
