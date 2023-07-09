#include "main.h"
/**
 * _strspn - fun 3
 * @s: the string to checked
 * @accept: the string to check
 * Return: the number of char in @accept
*/


unsigned int _strspn(char *s, char *accept)
{
	int i = 0, count, r;

	while (s[i])
	{
		for (r = 0; accept[r]; r++)
		{
			if (accept[r] == s[i])
			{
				count++;
				break;
			}
			else if (accept[r + 1] == '\00')
			{
				return (count);
			}
		}
		i++;
	}
	return (count);
}
