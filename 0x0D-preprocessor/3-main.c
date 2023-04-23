#include <stdio.h>
#include "3-function_like_macro.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
#ifndef ABS
	printf("The macro 'ABS' is not defined\n");
	return (1);
#else
	printf("%ld\n", ABS(1022344827634));
	return (0);
#endif
}
