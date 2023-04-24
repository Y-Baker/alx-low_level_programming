#include "function_pointers.h"

/**
 * array_iterator - make function with array
 * @array: the input array
 * @size: the size of the array
 * @action: the pointer to the function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action)
	{
		unsigned int i = 0;

		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
