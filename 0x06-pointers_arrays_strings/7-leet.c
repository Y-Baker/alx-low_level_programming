#include "main.h"

/**
 * *leet - fun 7
 * @a: the input string
 * Return: the result string
 */

char *leet(char *a)
{
	int i = 0, n = 0;
	char leet[] = "a4A4e3E3o0O0t7T7l1L1";

	while (a[i])
	{
		n = 0;
		while (leet[n] != '1')
		{
			if (a[i] == leet[n])
			{
				a[i] = leet[n + 1];
				break;
			}
			n += 2;
		}
		i++;
	}
	return (a);
}
