#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup     - Use malloc to create space to contain copy of @str
 *
 * @str:         The string to be copied
 *
 * Return:       Pointer to the newly created memory space
 */


char *_strdup(char *str)
{
	char *ptr_char;
	unsigned int i, length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	length = i;

	ptr_char = malloc(sizeof(char) * length + 1);

	if (ptr_char == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		ptr_char[i] = str[i];
	}
	ptr_char[i] = '\0';

	return (ptr_char);
}

