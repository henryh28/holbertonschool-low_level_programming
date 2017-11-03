#include "holberton.h"

/**
 * set_bit    - Sets bit value of @n at @index to 1
 *
 * @n:          Number argument
 * @index:      @index at which to set @n's bit value to 1
 *
 * Return:      (1) Success
 *              (-1) Failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int i = 1;

	if (index > sizeof(int) * 8)
	{
		return (-1);
	}

	i <<= index;
	*n = *n + i;

	return (1);
}
