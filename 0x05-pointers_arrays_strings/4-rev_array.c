#include "holberton.h"

/**
 * reverse_array   - Reverses the contents of an array of integers
 *
 * @a:               Pointer to the array to be reversed
 * @n:               Number of elmeents in array @a
 *
 * Return:           None
 */


void reverse_array(int *a, int n)
{
	int i = 0, swap;

	for (i = 0; i < n / 2; i++)
	{
		swap = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = swap;
	}
}
