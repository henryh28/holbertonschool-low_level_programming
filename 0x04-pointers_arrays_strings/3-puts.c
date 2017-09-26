#include "holberton.h"

/**
 * _puts - Prints a string followed by a newline
 *
 * @str:   String to be printed out
 *
 * Return: None
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str[0]);
		str++;
	}

	_putchar('\n');
}
