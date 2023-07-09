#include "main.h"

/**
 * *_strcat - Fun 1
 * @src: the second string
 * @dest: the first string
 * Return: the compine of the two strings
 */

char *_strcat(char *dest, char *src)
{
	int len, len1 = 0, len2 = 0, i = 0;

	while (dest[len1])
	{
		len1++;
	}
	while (src[len2])
	{
		len2++;
	}
	len = len1 + len2 - 1;
	while (len--)
	{
		dest[len1] = src[i];
		len1++;
		i++;
	}
	return (dest);
}
