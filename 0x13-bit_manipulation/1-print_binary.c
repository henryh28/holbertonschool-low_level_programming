#include "holberton.h"

#include <stdio.h>
/**
 * print_binary     - Converts and outputs @n as binary
 *
 * @n:                Unsigned integer to be converted to binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int digits = 1;

	while (n >> digits)
	{
		digits++;
	}

	while (digits--)
	{
		_putchar(((mask << digits) & n) ? '1' : '0');
	}
}
