#include "main.h"

int check_sp(char a);

/**
 * *cap_string - fun 6
 * @a: the input string
 * Return: the string with first char captial
 */

char *cap_string(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (i == 0 || check_sp(a[i - 1]) == 1)
		{
			if (a[i] >= 'a' && a[i] <= 'z')
			{
				a[i] -= 32;
			}
		}
		i++;
	}
	return (a);
}

/**
 * check_sp - check if it's a new word
 * @a: the char
 * Return: the result 0 if it not a new word
 */
int check_sp(char a)
{
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i = 0;

	while (i < 13)
	{
		if (a == sep_words[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
