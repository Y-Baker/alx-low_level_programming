#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - 1-alx
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int tmp = n % 10;

	if (tmp > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, tmp);
	}
	if (tmp == 0)
	{
		printf("Last digit of %d is %d and is 0", n, tmp);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, tmp);
	}

	return (0);
}
