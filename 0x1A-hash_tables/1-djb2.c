#include "hash_tables.h"

/**
 * hash_djb2 - an hash function
 * @str: the input
 * Return: the result
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_re;
	int c;

	hash_re = 5381;
	while (*str)
	{
		c = *str;
		hash_re = ((hash_re << 5) + hash_re); /*hash_re * 33*/
		hash_re += c;
		str++;
	}
	return (hash_re);
}
