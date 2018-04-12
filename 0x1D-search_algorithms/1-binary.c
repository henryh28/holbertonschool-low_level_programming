#include "search_algos.h"

/**
 * binary_search   - Performs a binary search through @array for @value
 *
 * @array:           Pointer to first element of array to search through
 * @size:            Number of elements in @array
 * @value:           Value to be searched for in @array
 *
 * Return:           Success: Index where @value occurs in @array
 *                   Failure: -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, half;
	int result = -1;

	if (!array || size <= 0)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		printf(i == size - 1 ? "\n" : ", ");
	}
	half = size / 2;

	if (array[half] == value)
		return (half);

	if (size == 1)
		return (-1);

	if (value < array[half])
	{
		result = binary_search(array, half, value);
	}
	else
	{
		if (size % 2 == 0)
		{
			result = binary_search(array + half, half, value);
		}
		else
		{
			result = binary_search(array + half + 1, half, value);
			if (result != -1)
				result++;
		}
		if (result != -1)
			return (result + half);
	}
	return (result);
}
