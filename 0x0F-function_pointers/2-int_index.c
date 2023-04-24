#include "function_pointers.h"

/**
 * int_index - return index if cmp function return true
 * @array: the array
 * @size: the size of the array
 * @cmp: the function that compare
 * Return: the index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp && size > 0)
	{
		int index = 0;
		while (index < size)
		{
			if (cmp (array[index]))
				return (index);
			index++;
		}
	}
	return (-1);
}
