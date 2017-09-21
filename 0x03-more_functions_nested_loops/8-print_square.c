#include "holberton.h"

/**
 * print_square - Print a Square whose width is user defined
 *
 * @size:         The length & width of the square to be printed
 *
 * Return:        None
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
