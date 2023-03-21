#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: the number
 * Return: The last digit of n
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	_putchar((n % 10) + '0');
	return (n % 10);
}
