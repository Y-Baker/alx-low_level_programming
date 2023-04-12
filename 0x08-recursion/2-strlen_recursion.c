#include "main.h"

/**
 * _strlen_recursion - fun to calculate the len of string
 * @s: the string
 * Return: the len of the string
*/

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
