#include "holberton.h"

/**
 * print_number - Print out user supplied numbers
 *
 * @n:            The number to be printed out
 *
 * Return:        None
 */

void print_number(int n)
{
	int reverse = 0, depth = 0, i, output;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	while (n != 0)
	{
		reverse *= 10;
		reverse += (n % 10);
		n /= 10;
		depth++;
	}

	depth = depth == 0 ? 1 : depth;

	for (i = 0; i < depth; i++)
	{
		output = reverse % 10;
		_putchar(output + '0');
		reverse /= 10;
	}
}
