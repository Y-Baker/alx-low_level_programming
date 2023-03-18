#include<stdio.h>

/**
 * main - 4-alx
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 101 || i == 113)
		{
			i++;
			break;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
