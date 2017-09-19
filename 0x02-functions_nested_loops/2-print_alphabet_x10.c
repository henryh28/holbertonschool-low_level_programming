#include "holberton.h"

/**
 * print_alphabet_x10 - Output lowercase alphabet 10 times followed by newline
 *
 * Return: (0) Success
 */

int print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}

	return (0);
}
