#include "holberton.h"

/**
 * puts2 - Prints out every other character of a string str
 *
 * @str:   The string to be operated on
 *
 * Return: None
 */

void puts2(char *str)
{
	int i, print_every = 2;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % print_every == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
