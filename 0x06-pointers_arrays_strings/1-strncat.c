#include "main.h"

/**
 * *_strncat - Fun 1
 * @src: the second string
 * @dest: the first string
 * @n: the lenth
 * Return: the compine of the two strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, len2 = 0, i = 0;

	while (dest[len1])
	{
		len1++;
	}
	while (src[len2])
	{
		len2++;
	}
	while (n-- && src[i] != '\0')
	{
		dest[len1] = src[i];
		len1++;
		i++;
	}
	return (dest);
}
