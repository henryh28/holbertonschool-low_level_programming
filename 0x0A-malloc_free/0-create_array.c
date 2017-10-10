#include <stdio.h>
#include <stdlib.h>

/**
 * create_array   - Use malloc to create an array
 *
 * @size:           Size of the array to be created
 * @c:              Character used to initialize the array with
 *
 * Return:          Pointer to the newly created array
 */


char *create_array(unsigned int size, char c)
{
	char *ptr_char;
	unsigned i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ptr_char = malloc(sizeof(c) * size);

	for (i = 0; i < size; i++)
	{
		ptr_char[i] = c;
	}

	return (ptr_char != NULL ? ptr_char : NULL);
}
