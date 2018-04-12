#include "search_algos.h"

/**
 * linear_search   - Performs a linear search through @array for @value
 *
 * @array:           Array of integers to be searched through
 * @size:            Size of @array
 * @value:           Value to be searched for in @array
 *
 * Return:           Success: First index where @value occurs in @array
 *                   Failure: -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
