#include "holberton.h"

/**
 * print_rev - Prints a string in reverse followed by a newline
 *
 * @s:         The string to be printed in reverse
 *
 * Return:     None
 */

void print_rev(char *s)
{
	int length = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (i = 1; i <= length; i++)
	{
		_putchar(s[length - i]);
	}
	_putchar('\n');
}
