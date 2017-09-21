#include "holberton.h"

/**
 * print_triangle - Print a triangle whose size is user defined
 *
 * @size:         The size of the triangle to be printed
 *
 * Return:        None
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				j > size - i ? _putchar('#') : _putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
