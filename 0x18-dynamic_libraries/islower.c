#include "main.h"

/**
 * _islower - check_islower_case
 * @c: is the char to check
 * Return: 0 if lower case , 1 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
