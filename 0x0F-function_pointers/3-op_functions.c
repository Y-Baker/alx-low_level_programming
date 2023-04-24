#include "3-calc.h"
/**
 * op_add - the sum
 * @a: the first mumber
 * @b: the second number
 * Return: the result
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the subtractor
 * @a: the first mumber
 * @b: the second number
 * Return: the result
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the multiplication
 * @a: the first mumber
 * @b: the second number
 * Return: the result
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the division
 * @a: the first mumber
 * @b: the second number
 * Return: the result
*/
int op_div(int a, int b)
{
	if (b == 0)
		return (100);
	return (a / b);
}
/**
 * op_mod - the modulus
 * @a: the first mumber
 * @b: the second number
 * Return: the result
*/
int op_mod(int a, int b)
{
	if (b == 0)
		return (100);
	return (a % b);
}
