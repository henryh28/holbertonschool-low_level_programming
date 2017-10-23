#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"


/**
 * output     - Outputs @c to standard output
 *
 * @c:          Character to be printed
 */

void output(char c)
{
	write(1, &c, 1);
}


/**
 * convert    - Converts and prints @n into value in number @base system
 *
 * @n:          Decimal value to be converted to @base system
 * @base:       Number system used for conversion
 */

void convert(long int n, int base)
{
	char *result;
	long int answer = 0, multiplier = 1;
	int depth = 0, i = 0;

	while (n > 0)
	{
		answer = answer + ((n % base) * multiplier);

		if (n > base)
		{
			answer *= 10;
		}
		n /= base;
		depth++;
		multiplier *= 10;
	}


	result = malloc(sizeof(char) * depth);

	for (i = 0; i < depth; i++)
	{
		result[i] = 'b';
	}


}
