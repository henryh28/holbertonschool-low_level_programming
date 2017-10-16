#include <stdlib.h>
#include "dog.h"

/**
 * free_dog   - Free up the memory used by the dog_t variable from 4-new_dog.c
 *
 * @d:          Pointer to the memory segment occupied by the dog_t variable
 */


void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
