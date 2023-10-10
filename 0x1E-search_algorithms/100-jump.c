#include "search_algos.h"

/**
 * jump_search - searches for value in array using Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
*/
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0, step, index = 0;

	if (array && size > 0)
	{
		step = sqrt(size);
		do {
			printf("Value checked array[%li] = [%i]\n", index, array[index]);
			if (array[index] == value)
				return (value);
			prev = index;
			index += step;
		} while (array[index] < value && index < size);

		printf("Value found between indexes [%li] and [%li]\n", prev, index);
		while (prev <= index && prev < size)
		{
			printf("Value checked array[%li] = [%i]\n", prev, array[prev]);
			if (array[prev] == value)
				return (value);
			prev++;
		}
	}
	return (-1);
}

/**
 * min - find minumum in two number
 * @a: the first number
 * @b: the second number
 * Return: the minumum
*/
size_t min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}
