#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index     - Return index in @array that matches int argument of @cmp
 *
 * @array:         Array argument to be searched through
 * @size:          Number of elments in @array
 * @cmp:           Callback function to check @array elements for match
 *
 * Return:         Index of @array element that matches @cmp match result
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (0);
}
