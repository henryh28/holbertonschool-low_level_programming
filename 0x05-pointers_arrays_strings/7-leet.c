#include "holberton.h"

/**
 * leet    - Convert sentence to 1337 5p34k
 *
 * @s:       String to be converted
 *
 * Return:   Pointer to the converted string
 */

char *leet(char *s)
{
	int i, j;

	char key[] = "aAeEoOtTlL";
	char value[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == key[j])
			{
				s[i] = value[j];
			}
		}
	}

	return (s);
}

