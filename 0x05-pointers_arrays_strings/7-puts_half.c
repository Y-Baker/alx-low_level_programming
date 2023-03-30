#include "main.h"

/**
 * puts_half - fun 7
 * @str: the string
 * Return: 0
 */

void puts_half(char *str)
{
	int i = 0, index, len;

	while (str[len])
	{
		len++;
	}
	i = len / 2;
	index = len - i;
	while (i--)
	{
		_putchar(str[index]);
		index++;
	}
	putchar('\n');
}
