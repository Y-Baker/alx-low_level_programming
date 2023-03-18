#include <stdio.h>

/**
 * main - 10-alx
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 48, n;

	while (i <= 57)
	{
		n = 48;
		n = n + (i - 48);
		while (n <= 57)
		{
			if (i != n)
			{
				putchar(i);
				putchar(n);
				if (i != 56 || n != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
			n++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
