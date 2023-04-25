#include "variadic_functions.h"

/**
 * sum_them_all - sum of all input parameter
 * @n: the number of parameters
 * Return: the sum of input parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list nums;

	if (n == 0)
		return (0);
	va_start(nums, n);
	while (i < n)
	{
		sum += va_arg(nums, int);
		i++;
	}
	va_end(nums);
	return (sum);
}
