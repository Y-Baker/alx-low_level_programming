#include <stdio.h>

/**
 * main - 3-alx
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	i = 65;
	while (i <= 90)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
