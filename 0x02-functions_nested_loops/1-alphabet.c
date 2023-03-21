#include <stdio.h>
/**
 * print_alphabet - print small characters
 *
 * Return: Small char them new line
 */

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
