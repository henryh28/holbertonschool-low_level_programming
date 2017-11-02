#include "holberton.h"

/**
 * binary_to_uint     - Convert @b to an unsigned int
 *
 * @b:                  A binary number
 *
 * Return:              Unsigned int equivalent of @b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int answer = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		answer <<= 1;
		answer += *b - '0';

		b++;
	}

	return (answer);
}

/* Reference: http://www.dreamincode.net/forums/topic/ */
/* 195111-how-to-convert-binary-to-decimal-using-c-programming/ */
