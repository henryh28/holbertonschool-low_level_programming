#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat     - Concatenate @s1 and @s2
 *
 * @s1:             The first part of the newly concatenated string
 * @s2:             The second part of the newly concatenated string
 *
 * Return:          Pointer to the newly concatenated string
 */


char *str_concat(char *s1, char *s2)
{
	unsigned int i, length_1, length_2;
	char *ptr_char;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		;
	length_1 = i;

	for (i = 0; s2[i] != '\0'; i++)
		;
	length_2 = i;

	ptr_char = malloc(sizeof(char) * (length_1 + length_2) + 1);

	if (ptr_char == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length_1 + length_2; i++)
	{
		ptr_char[i] = i < length_1 ? s1[i] : s2[i - length_1];
	}
	ptr_char[i] = '\0';

	return (ptr_char);
}
