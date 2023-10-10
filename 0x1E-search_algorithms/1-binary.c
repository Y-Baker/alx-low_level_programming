#include "search_algos.h"

/**
 * binary_search - searches for value in array using Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	size_t min = 0, max = size - 1, i;
	size_t mid;

	if (array && size > 0)
	{
		while (min <= max)
		{
			mid = min + (max - min) / 2;
			printf("Searching in array: %i", array[min]);
			for (i = min + 1; i <= max; i++)
				printf(", %i", array[i]);
			printf("\n");
			if (array[mid] == value)
				return (mid);
			if (array[mid] > value) /*ignore the left half*/
				max = mid - 1;
			if (array[mid] < value) /*ignore the right half*/
				min = mid + 1;
		}
	}
	return (-1);
}
