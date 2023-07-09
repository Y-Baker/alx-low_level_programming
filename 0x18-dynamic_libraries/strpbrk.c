#include "main.h"
#include "stdlib.h"

/**
 * _strpbrk - the fun 4
 * @s: the string search in
 * @accept: the string looking for
 * Return: the string from first match to end
 */

char *_strpbrk(char *s, char *accept)
{
	int len1 = 0, len2;

	while (s[len1])
	{
		for (len2 = 0; accept[len2]; len2++)
		{
			if (s[len1] == accept[len2])
			{
				return (s + len1);
			}
		}
		len1++;
	}
	return (NULL);
}
