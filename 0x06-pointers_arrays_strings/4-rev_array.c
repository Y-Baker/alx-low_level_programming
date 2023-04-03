#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: the array
 * @n: the number of elements
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i = n / 2, index = 0;

	while (i--)
	{
		temp = *(a + (n - 1 - index));
		a[n - 1 - index] = a[index];
		a[index] = temp;
		index++;
	}
}
