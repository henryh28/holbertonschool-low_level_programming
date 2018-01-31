#include "sort.h"

/**
 * selection_sort   - Sort @array using selection sort methodology
 *
 * @array:            Array to be sorted
 * @size:             Size of @array
 *
 * Return:            None
 */

void selection_sort(int *array, size_t size)
{
	size_t index, min_index, bookmark = index = min_index = 0;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (index = 0, bookmark = 0; index < size; index++)
	{
		/* Initialize index for minimum value */
		if (array[index] < array[min_index])
		{
			min_index = index;
		}

		/* End of each pass, swap min value at incrementing bookmark */
		if (index == size - 1)
		{
			if (bookmark != min_index)
			{
				array[bookmark] = array[bookmark] + array[min_index];
				array[min_index] = array[bookmark] - array[min_index];
				array[bookmark] = array[bookmark] - array[min_index];
				print_array(array, size);
			}

			bookmark++;
			index = min_index = bookmark;
		}
	}
}
