#include <stdlib.h>

/**
 * _calloc   - Allocate memory and initialize all cells with 0
 *
 * @nmemb:     size of data type
 * @size:      Number of @nmemb sized memory to allocate
 *
 * Return:     Pointer to allocated memory that is initialized to 0
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
