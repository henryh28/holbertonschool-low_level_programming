#include "sort.h"

/**
 * bubble_sort   - Implement a bubble sort function to sort @array
 *
 * @array:         Array containing values to be sorted
 * @size:          Size of @array
 *
 * Return:         None
 */

void bubble_sort(int *array, size_t size)
{
	int i = 0, swapped = 0, temp_size = size;

	for (i = 1; i < temp_size; i++)
	{
		/* swap values if current value is < previous value */
		if (array[i] < array[i - 1])
		{
			array[i] = array[i] + array[i - 1];
			array[i - 1] = array[i] - array[i - 1];
			array[i] = array[i] - array[i - 1];

			print_array(array, size);
			swapped = 1;

			/* Resets index for another run if a swap occured */
			if (i == temp_size - 1 && swapped == 1)
			{
				swapped = 0;
				i = 0;
				temp_size--;
			}
		}
	}
}
