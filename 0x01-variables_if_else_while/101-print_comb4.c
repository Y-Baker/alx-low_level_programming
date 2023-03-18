#include <stdio.h>

/**
 * main - 101-alx
 *
 * Return: Always 0
 */

int main(void)
{
	int a = 48, b, c;

	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			c = 48;
			while (c <= 57)
			{
				if (b > a && c > b)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55 || b != 56 || c != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
