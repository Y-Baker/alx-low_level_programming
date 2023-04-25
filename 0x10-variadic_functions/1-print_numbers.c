#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: separate between numbers
 * @n: number of pararmeter
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0, index;
	int x;
	va_list nums;

	if (n <= 0)
		return;
	va_start(nums, n);
	while (i < n)
	{
		index = 0;
		x = va_arg(nums, int);
		printf("%d", x);
		if (i != n - 1)
		{
			while (separator[index])
			{
				putchar(separator[index]);
				index++;
			}
		}
		i++;
	}
	va_end(nums);
}

