#include "main.h"

/**
 * main - how many coin needed
 * @argc: Number of command line arguments
 * @argv: Array of arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int num = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	num += separate(&cents, 25);
	num += separate(&cents, 10);
	num += separate(&cents, 5);
	num += separate(&cents, 2);
	num += separate(&cents, 1);
	printf("%d\n", num);
	return (0);
}

/**
 * separate - fun to return how many coins from this n and the remain
 * @total: the pointer for cents
 * @n: the separator
 * Return: Number of coins from this n
*/

int separate(int *total, int n)
{
	int num = 0;

	if (*total / n >= 1)
	{
		num += *total / n;
		*total %= n;
	}
	return (num);
}
