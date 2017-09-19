#include "holberton.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline
 *
 * Return: (0) Success
 */

int print_alphabet(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
	return (0);
}
