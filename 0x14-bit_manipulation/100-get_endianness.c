#include "main.h"

/**
 * get_endianness - check the ends
 * Return: 0 if large 1 if small
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *s = (char *) &x;

	return ((int) *s);
}
