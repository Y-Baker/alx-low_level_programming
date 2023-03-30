#include "main.h"

/**
 * _strlen - fun 2
 * @s: the string
 * Return: the len of the string
 */

int _strlen(char *s)
{
	int count = 0;

	for (int i = 0; ; i++)
	{
		if (*(s + i) == '\00')
			break;
		count++;
	}
	return (count);
}
