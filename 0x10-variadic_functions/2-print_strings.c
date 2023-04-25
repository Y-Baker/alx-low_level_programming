#include "variadic_functions.h"

/**
 * print_strings - print string
 * @separator: separate between strings
 * @n: the number of parameters
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *s;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		s = va_arg(args, char*);
		if (s)
		{
			printf("%s", s);
		}
		else
			printf("(nil)");
		if (i != n - 1 && separator)
		{
			printf("%s", separator);
		}
		i++;
	}
	putchar('\n');
	va_end(args);
}
