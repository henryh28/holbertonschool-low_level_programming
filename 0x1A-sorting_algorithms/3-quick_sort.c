#include "sort.h"

/**
 * quick_sort_actual-Sort @array using quick sort methodology
 *
 * @array:           Array to be sorted
 * @left:            First element of the array used
 * @right:           Last element used of the array, used as pivot
 * @size:            Size of @array
 *
 * Return:           None
 */

void quick_sort_actual(int *array, int left, int right, int size)
{
	int pivot = array[right], i = left, j = left;

	if (left < right)
	{
		/* partition values to be less/left < pivot > greater/right */
		for (j = left; j <= right - 1; j++)
		{
			if (array[j] < pivot)
			{
				if (array[i] != array[j])
				{
					array[i] = array[i] + array[j];
					array[j] = array[i] - array[j];
					array[i] = array[i] - array[j];

					print_array(array, size);
				}
				i++;
			}
		}

		/* move the pivot to correct spot between partitions */
		if (array[right] < array[i])
		{
			array[i] = array[i] + array[right];
			array[right] = array[i] - array[right];
			array[i] = array[i] - array[right];

			print_array(array, size);
		}

		/* Recursively calls self with sub left/right partitions */
		quick_sort_actual(array, left, i - 1, size);
		quick_sort_actual(array, i + 1, right, size);
	}
}


/**
 * quick_sort     - Calls quick_sort_actual to sort @array with quick sort
 *
 * @array:          Array to be sorted
 * @size:           Size of @array
 *
 * Return:          None
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
	{
		return;
	}

	quick_sort_actual(array, 0, size - 1, size);
}
