#include "holberton.h"

/**
 * _puts_recursion   - Print a string followed by a newline
 *
 * @s:                 String to be printed
 *
 * Return:             None
 */


void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
