#include <stdlib.h>

/**
 * _calloc   - Allocate memory and initialize all cells with 0
 *
 * @nmemb:     Number of @size sized data
 * @size:      Size of Data type
 *
 * Return:     Pointer to allocated memory that is initialized to 0
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
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


	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
