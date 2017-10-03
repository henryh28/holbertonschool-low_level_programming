#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums   - Print the sum of 2 diagonals of a square matrix of int
 *
 * @a:                The square matrix
 * @size:             Size of matrix
 *
 * Return:            None
 */


void print_diagsums(int *a, int size)
{
	int i = 0, sum_lr = 0, sum_rl = 0;

	/* Top left to bottom right */
	for (i = 0; i < size * size; i += size + 1)
	{
		sum_lr += a[i];
	}

	/* Top right to bottom left */
	for (i = 0; i < (size * size) - 1; i += size - 1)
	{
		sum_rl += a[i];
	}

	printf("%d, %d\n", sum_lr, sum_rl);
}
