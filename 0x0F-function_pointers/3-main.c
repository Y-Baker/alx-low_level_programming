#include "3-calc.h"

/**
 * main - the main func
 * @argc: the number of arguments
 * @argv: array of strings
 * Return: always zero
*/

int main(int argc, char *argv[])
{
	int re;
	int (*op_fun)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	op_fun = get_op_func(argv[2]);
	if (op_fun == NULL || argv[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	re = op_fun(atoi(argv[1]), atoi(argv[3]));
	if (re == 100)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", re);
	return (0);
}
