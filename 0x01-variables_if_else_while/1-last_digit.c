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
	int temp = n % 10;

	if (temp > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, temp);
	}
	if (temp == 0)
	{
		printf("Last digit of %d is %d and is 0", n, temp);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, temp);
	}

	return (0);
}
