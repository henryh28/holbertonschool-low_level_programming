#include "holberton.h"

/**
 * get_bit     - Return the value of @n at @index
 *
 * @n:           Integer value
 * @index:       Index of value to extract from @n
 *
 * Return:       Value of @n at @index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}

/* Reference: http://codeforwin.org/2016/01/ */
/* c-program-to-get-value-of-nth-bit-of-number.html */
