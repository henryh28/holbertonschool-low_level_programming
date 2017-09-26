#include <stdio.h>

/**
 * print_array - Print n elments of array *a
 *
 * @a:           Array containing value to be printed
 * @n:           Number of elements to print from array @a
 *
 * Return:       None
 */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
