#include "main.h"

/**
 * print_array - Fun 8
 * @a: The Array
 * @n: the lenth
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (n--)
	{
		printf("%d", a[i]);
		if (n != 0)
			printf(", ");
		i++;
	}
	putchar('\n');
}
