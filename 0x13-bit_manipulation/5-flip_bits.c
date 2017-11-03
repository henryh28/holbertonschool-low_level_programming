#include "holberton.h"

/**
 * flip_bits      - Return # of bits needed to flip to turn @n in to @m
 *
 * @n:              First number
 * @m:              Second number
 *
 * Return:          Number of bits needed to flip to turn @n to @m
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int number = (n ^ m);

	while (number)
	{
		count += number & 1;
		number >>= 1;
	}

	return (count);
}

/* Reference: http://www.geeksforgeeks.org/ */
/* count-number-of-bits-to-be-flipped-to-convert-a-to-b/ */
