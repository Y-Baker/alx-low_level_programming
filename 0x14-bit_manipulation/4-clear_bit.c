#include "main.h"

/**
 * clear_bit - set value of bit with index to zero
 * @n: the number
 * @index: the index
 * Return: the state 1 if worked and -1 otherwise
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (!n || index > sizeof(n) * 8)
		return (-1);
	bit = (1 << index);
	bit = ~bit;
	*n = *n & bit;
	return (1);
}
