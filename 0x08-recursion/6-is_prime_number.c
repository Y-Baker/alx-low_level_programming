#include "main.h"
int check(int n, int i);

/**
 * is_prime_number - check if it prime
 * @n: the number to check
 * Return: 1 if prime, 0 otherwise
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check(n, 2));
}

/**
 * check - check if i factor to n
 * @n: the number
 * @i: the checker
 * Return: 0 if i factor to n
*/

int check(int n, int i)
{
	if (i >= n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (check(n, ++i));
}
