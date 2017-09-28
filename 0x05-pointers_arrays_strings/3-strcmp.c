#include "holberton.h"

/**
 * _strcmp   - Compares 2 strings
 *
 * @s1:        String to be compared to @s2
 * @s2:        String to be compared to @s1
 *
 * Return:     Integer value greater than, equal to, or less than 0
 *             Depending on difference between @s1 & @s2
 */


int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
