#include "search_algos.h"

/**
 * linear_search - searches for value in array using Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%li] = [%i]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
