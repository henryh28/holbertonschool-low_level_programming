#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator     - Execute @action on each element of @array
 *
 * @array:              Array of integer values
 * @size:               Size of @array
 * @action:             Callback function used to process elements of @array
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
