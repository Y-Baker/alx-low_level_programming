#include "main.h"

/**
 * _isdigit - check if it a number
 * @c: the char
 * Return: the answer
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
