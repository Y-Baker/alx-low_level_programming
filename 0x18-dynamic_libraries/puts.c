#include "main.h"

/**
 * _puts - prints a string and a new line
 * @s: pointer to a string to print
 *
 * Return: 0
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
