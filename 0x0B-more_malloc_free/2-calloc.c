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

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (size--)
	{
		ptr[size] = 0;
	}

	return (ptr);
}
