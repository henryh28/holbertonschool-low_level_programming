#include <stdlib.h>

/**
 * malloc_checked   - Return pointer to memory allocated with malloc
 *
 * @b:                Size in bytes of memory to allocate
 *
 * Return:            Pointer to allocated memory of size @b
 */


void *malloc_checked(unsigned int b)
{
	void *ptr_void;

	ptr_void = malloc(b);

	if (ptr_void == NULL)
	{
		exit(98);
	}

	return (ptr_void);
}
