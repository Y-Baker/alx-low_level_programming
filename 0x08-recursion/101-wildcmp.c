#include "main.h"
void after_star(char *a, char *b, int *n1, int *n2);

/**
 * wildcmp - compare two string
 * @s1: the first string
 * @s2: the second string
 * Return: The Result
*/

int wildcmp(char *s1, char *s2)
{
	int a, b;

	if (s1[0] || s2[0])
	{
		if (s1[0] == '*')
		{
			after_star(s1, s2, &a, &b);
			s1 += a;
			s2 += b;
		}
		if (s2[0] == '*')
		{
			after_star(s2, s1, &a, &b);
			s2 += a;
			s1 += b;
		}
		if (s1[0] == s2[0])
		{
			if (*s1 == '\00')
				return (1);
			else
				return (1 * (wildcmp(s1 + 1, s2 + 1)));
		}
		else
			return (0);
	}
	return (1);
}

/**
 * after_star - after star to s1
 * @a: the string with *
 * @b: the string without *
 * @n1: the first pointer
 * @n2: the second pointer
*/

void after_star(char *a, char *b, int *n1, int *n2)
{
	unsigned short len1 = 0, len2 = 0, index = 0, len = 0;

	while (a[len1] == '*')
		len1++;
	while (b[len2] != a[len1])
		len2++;
	while (b[len])
	{
		if (b[len] == a[len1])
			index++;
		len++;
	}
	while (index > 1)
	{
		len2++;
		while (b[len2] != a[len1])
			len2++;
		index--;
	}
	*n1 = len1;
	*n2 = len2;
}
