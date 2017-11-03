#include "holberton.h"

/**
 * clear_bit    - Sets bit value of @n at @index to 0
 *
 * @n:            Pointer to number argument
 * @index:        @index at which to set @n's bit value to 0
 *
 * Return:        (1) Success
 *                (-1) Failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int i = 1;

	if (index > sizeof(int) * 8)
	{
		return (-1);
	}

	i <<= index;
	*n = *n & ~i;

	return (1);
}
