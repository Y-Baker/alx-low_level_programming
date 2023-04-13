#include "main.h"

/**
 * main - print number of input arguments
 * @argc: Number of command line arguments
 * @argv: Array of arguments
 * Return: Always 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
