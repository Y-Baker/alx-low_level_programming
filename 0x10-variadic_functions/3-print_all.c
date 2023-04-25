#include "variadic_functions.h"

/**
 * print_all - printf impliment
 * @format: the key
*/

void print_all(const char * const format, ...)
{
	char *str;
	int index = 0, key = 1, n;
	va_list args;

	va_start(args, format);
	while (format && format[index])
	{
		key = 1;
		switch (format[index])
		{
		case 'c':
			n = va_arg(args, int);
			printf("%c", n);
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		default:
			key = 0;
			break;
		} index++;
		if (format[index] && key)
			printf(", ");
	} putchar('\n');
	va_end(args);
}
