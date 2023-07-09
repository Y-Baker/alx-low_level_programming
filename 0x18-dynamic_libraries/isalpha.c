#include "main.h"

/**
 * _isalpha - check if is an alpha or not
 * @c: is the char to check
 * Return: 1 if it an alpha, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
