#include "holberton.h"

/**
 * get_endianness   - Check the endianess of environment
 *
 * Return:            (0) Big Endian environment
 *                    (1) Little Endian environment
 */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	return (*c);
}

/* Reference: http://www.geeksforgeeks.org/ */
/* little-and-big-endian-mystery/ */
