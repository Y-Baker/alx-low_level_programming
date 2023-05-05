#include "main.h"

/**
 * set_bit - funtion to sets value of bit to 1 at index
 * @n: number
 * @index: index
 * Return: value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (!n || index > sizeof(n) * 8)
		return (-1);
	bit = (1 << index);
	*n = *n | bit;
	return (1);
}
