#include "main.h"
int check_string(char *s, unsigned short i, unsigned short len);

/**
 * is_palindrome - check if string is a palindrome or not
 * @s: the string
 * Return: 1 if palindrome and 0 otherwise
*/

int is_palindrome(char *s)
{
	unsigned short len;

	if (*s == 0)
		return (1);
	while (s[len])
		len++;
	len--;
	return (check_string(s, 0, len));
}

/**
 * check_string - check
 * @s: the string
 * @i: the index
 * @len: the lenth of the string
 * Return: the result
*/
int check_string(char *s, unsigned short i, unsigned short len)
{
	unsigned short checker;

	if (i > (len / 2))
		return (1);
	if (s[i] == s[len - i])
		checker = 1;
	else
		checker = 0;
	return (checker * check_string(s, ++i, len));
}
