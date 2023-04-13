#include "main.h"

/**
 * main - print all arguments
 * @argc: Number of command line arguments
 * @argv: Array of arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
