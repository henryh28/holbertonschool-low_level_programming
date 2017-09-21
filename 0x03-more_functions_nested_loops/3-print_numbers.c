#include "holberton.h"

/**
 * print_numbers - Print digits from 0-9, followed by newline
 *
 * Return:       None
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
