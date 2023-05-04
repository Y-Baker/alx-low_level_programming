#include "main.h"

/**
 * get_bit - get specific bit
 * @n: the number in decimal
 * @index: the index
 * Return: the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int digit;

	digit = (n >> index);
	if (index > 32)
	return (-1);
	return (digit & 1);
}
