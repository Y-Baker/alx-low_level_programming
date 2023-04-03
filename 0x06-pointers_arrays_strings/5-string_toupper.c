#include "main.h"

/**
 * *string_toupper - to upper case
 * @a: the input string
 * Return: the result
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] > 'a' && a[i] < 'z')
		{
			a[i] -= 32;
		}
		i++;
	}
	return (a);
}
