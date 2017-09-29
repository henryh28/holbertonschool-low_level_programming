#include "holberton.h"

/**
 * leet    - Convert sentence to 1337 5p34k
 *
 * @s:       String to be converted
 *
 * Return:   Pointer to the converted string
 */

struct dictionary
{
	char key;
	char value;
};


char *leet(char *s)
{
	int i, j, hash_size = 10;

	struct dictionary leet[hash_size];

	leet[0].key = 'a';
	leet[0].value = '4';
	leet[1].key = 'A';
	leet[1].value = '4';
	leet[2].key = 'e';
	leet[2].value = '3';
	leet[3].key = 'E';
	leet[3].value = '3';
	leet[4].key = 'o';
	leet[4].value = '0';
	leet[5].key = 'O';
	leet[5].value = '0';
	leet[6].key = 't';
	leet[6].value = '7';
	leet[7].key = 'T';
	leet[7].value = '7';
	leet[8].key = 'l';
	leet[8].value = '1';
	leet[9].key = 'L';
	leet[9].value = '1';

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < hash_size; j++)
		{
			if (s[i] == leet[j].key)
			{
				s[i] = leet[j].value;
			}
		}

	}

	return (s);
}
