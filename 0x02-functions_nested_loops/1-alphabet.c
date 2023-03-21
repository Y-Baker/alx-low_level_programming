#include <stdio.h>
/**
 * print_alphabet - print small characters
 *
 * Return: Small char them new line
 */

void print_alphabet(void)
{
	for (int i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
