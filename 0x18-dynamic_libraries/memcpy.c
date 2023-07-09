#include "main.h"
/**
 * _memcpy - copy n byte of memory
 * @dest: the buffer
 * @src: the string copy from
 * @n: the size
 * Return: the result dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
