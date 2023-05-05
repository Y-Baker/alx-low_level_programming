#include "main.h"

/**
 * flip_bits - function that get the number of fliped bits
 * @n: from
 * @m: to
 * Return: result of fliped needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, no_flip = 0;
	unsigned long int x = sizeof(unsigned long int) * 8;

	for (i = 0; i < x; i++)
	{
		if ((m & 1) != (n & 1))
			no_flip += 1;
		n = n >> 1;
		m = m >> 1;
	}

	return (no_flip);
}
