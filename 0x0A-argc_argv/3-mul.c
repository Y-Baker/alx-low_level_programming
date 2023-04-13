#include "main.h"

/**
 * main - multiply two int
 * @argc: Number of command line arguments
 * @argv: Array of arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	int i = 1, mul = 1;

	while (i < argc)
	{
		mul *= atoi(argv[i]);
		i++;
	}
	printf("%d\n", mul);
	return (0);
}
