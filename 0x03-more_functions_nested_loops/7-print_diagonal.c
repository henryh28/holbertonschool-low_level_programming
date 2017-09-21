#include "holberton.h"

/**
 * print_diagonal - Print a '\' after (argument - 1) number of spaces
 *
 * @n:              Number of times to print spaces with a '\ at the end
 *
 * Return:          None
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				j == i ? _putchar('\\') : _putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
