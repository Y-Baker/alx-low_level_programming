#include "main.h"

/**
 * main - add two int
 * @argc: Number of command line arguments
 * @argv: Array of arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	while (i < argc)
	{
		if (strnum(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * strnum - check if the string is a number or not
 * @s: the string
 * Return: 0 if number otherwise 1
*/

int strnum(char *s)
{
	int len = 0;

	while (s[len])
	{
		if (!(s[len] >= 48 && s[len] <= 57))
			return (1);
		len++;
	}
	return (0);
}
