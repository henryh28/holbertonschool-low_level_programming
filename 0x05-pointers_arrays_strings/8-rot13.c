#include "holberton.h"

/**
 * rot13   - Perform ROT13 encryption on string argument
 *
 * @s:       String to be encrypted
 *
 * Return:   Pointer to the encrypted string
 */

char *rot13(char *s)
{
	int i, j;

	char key[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char value[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (s[i] == key[j])
			{
				s[i] = value[j];
				break;
			}
		}
	}

	return (s);
}

