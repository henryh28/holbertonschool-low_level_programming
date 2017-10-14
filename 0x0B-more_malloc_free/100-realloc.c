#include <stdlib.h>

/**
 * _realloc    - Expand or truncate a copy of @ptr based on @new_size
 *
 * @ptr:         Pointer to segment of memory to be made a copy of
 * @old_size:    Size in bytes of @ptr
 * @new_size:    Size in bytes of copy of @ptr
 *
 * Return:       Pointer to copy of @ptr
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_copy;
	unsigned int i = 0, copy_size = 0;

	/* Special cases */
	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		ptr_copy = malloc(new_size);
		free(ptr);

		return (ptr_copy == NULL ? NULL : ptr_copy);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* Expand or truncate copy of ptr */
	ptr_copy = malloc(new_size);
	if (ptr_copy == NULL)
	{
		return (NULL);
	}

	copy_size = new_size < old_size ? new_size : old_size;

	for (i = 0; i < copy_size; i++)
	{
		((char *)ptr_copy)[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (ptr_copy);
}
