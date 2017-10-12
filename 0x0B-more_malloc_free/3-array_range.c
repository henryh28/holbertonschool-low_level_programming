#include <stdlib.h>

/**
 * array_range   - Allocate and initialize memory based on integer arguments
 *
 * @min:           The integer with which to begin initialization of memory
 * @max:           The integer with which to end initialization of memory
 *
 * Return:         Pointer to allocated/initialized memory segment
 */


int *array_range(int min, int max)
{
	int *ptr_int;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}

	ptr_int = malloc(sizeof(int) * (max - min + 1));

	if (ptr_int == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		ptr_int[i] = min;
		i++;
		min++;
	}

	return (ptr_int);
}
