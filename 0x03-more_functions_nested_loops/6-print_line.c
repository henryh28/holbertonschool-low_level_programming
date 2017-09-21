#include "holberton.h"

/**
 * print_line - Print an underscore a user specified number of times
 *
 * @n:          Number of times to print an underscore
 *
 * Return:      None
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
