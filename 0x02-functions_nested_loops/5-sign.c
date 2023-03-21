#include "main.h"

/**
 * print_sign - determine the sign
 * @n: the number to check
 * Return: 1 if positive and 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (-1);
}
