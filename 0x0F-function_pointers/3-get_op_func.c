#include "3-calc.h"

/**
 * get_op_func - return the correct function
 * @s: the input op
 * Return: a function pointer
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (*s == *ops[i].op)
			break;
		i++;
	}
	return (ops[i].f);
}
