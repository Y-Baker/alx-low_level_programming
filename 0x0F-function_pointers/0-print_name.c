#include "function_pointers.h"

/**
 * print_name - print name with a input function
 * @name: the name
 * @f: pointer to a function
*/

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
