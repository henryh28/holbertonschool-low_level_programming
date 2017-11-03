#include "holberton.h"

/**
 * print_binary     - Converts and outputs @n as binary
 *
 * @n:                Unsigned integer to be converted to binary
 */

void print_binary(unsigned long int n)
{
	int digits = 0, i;
	unsigned long int dupe = n;

	while (dupe >>= 1 > 0)
	{
		digits++;
	}

	for (i = 1 << digits; i != 0; i >>= 1)
	{
		_putchar(i & n ? '1' : '0');
	}
}

/* Reference: https://stackoverflow.com/questions/19254118/ */
/* convert-from-base-10-to-base-2-using-bitwise-operations */
