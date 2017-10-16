#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * printdog     - Outputs a variable of type struct dog
 *
 * @d:            Variable of type struct dog to be printed
 *
 * Return:        None
 */


void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name == NULL ? "(Nil)" : d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner == NULL ? "(Nil)" : d->owner);
		}
	}
}

