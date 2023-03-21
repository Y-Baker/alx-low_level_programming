#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Return: print_alphabet_x10
 */

void print_alphabet_x10(void)
{
	int i, count = 10;

	while (count--)
	{
		i = 97;
		while (i <= 122)
		{
			putchar(i);
			i++;
		}
		putchar('\n');
	}
}
