#include "holberton.h"

/**
 * main - Outputs a string to stdout
 *
 * Return: (0) Success
 */

int main(void)
{
	char name[] = "Holberton";
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(name[i]);
	}

	_putchar('\n');
	return (0);
}
