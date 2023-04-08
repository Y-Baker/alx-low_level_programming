#include "main.h"
/**
 * _memset - fun 0
 * @s: the start of memory
 * @b: the char will be filled
 * @n: the size
 * Return: the new string
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
