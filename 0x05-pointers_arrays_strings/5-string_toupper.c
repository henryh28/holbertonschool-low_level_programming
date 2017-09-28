#include "holberton.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 *
 * @s:              The string to be operated on
 *
 * Return:          Pointer to the converted string
 */


char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}

	return (s);
}
