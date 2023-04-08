#include "main.h"
/**
 * _strchr - the fun 2
 * @s: the string
 * @c: the char you look for
 * Return: the remain string after c
*/


char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
