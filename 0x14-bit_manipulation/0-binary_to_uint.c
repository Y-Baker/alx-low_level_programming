#include "main.h"

/**
 * binary_to_uint - convert from binary to decimal
 * @b: pointer to string contain the binary number
 * Return: the decimal number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, power = 0, index = 0;

	if (!b)
		return (0);
	while (b[index])
	{
		switch (b[index])
		{
		case '0':
			n *= 2;
			break;
		case '1':
			n = 2 * n + 1;
			break;
		default:
			return (0);
		}
	power++;
	index++;
	}
	return (n);
}
