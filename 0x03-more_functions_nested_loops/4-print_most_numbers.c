#include "holberton.h"

/**
 * print_most_numbers - Prints 0-9 (sans 2 & 4) to stdout
 *
 * Return:              None
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		i != 2 && i != 4 ? _putchar(i + '0') : i;
	}
	_putchar('\n');
}
