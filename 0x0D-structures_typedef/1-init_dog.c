#include <stdlib.h>
#include "dog.h"

/**
 * init_dog   - Initialize a variable of type struct dog
 *
 * @d:          Format for dog struct
 * @name:       Name of the dog
 * @age:        Age of the dog
 * @owner:      Owner of the dog
 *
 * Return:      None
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
