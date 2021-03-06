#include "holberton.h"

/**
 * puts_half - Prints out half of a string, followed by a newline
 *
 * @str:       The string to be printed
 *
 * Return:     None
 */


void puts_half(char *str)
{
	int i, length = 0, print_from;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	print_from = length % 2 == 0 ? (length / 2) : ((length / 2) + 1);

	for (i = print_from; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
