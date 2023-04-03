#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the result
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			diff = *(s1 + i) - *(s2 + i);
			if (diff != 0)
				break;
		}
		i++;
	}
	return (diff);
}
