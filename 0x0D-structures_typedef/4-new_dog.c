#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * arg_copy  -   Make a copy of passed in argument
 *
 * @source:      Data to make copy of
 *
 * Return:       Pointer to memory segment containing copy of argument data
 */

char *arg_copy(char *source)
{
	char *ptr;
	int i = 0, length = 0;

	for (length = 0; source[length] != '\0'; length++)
		;

	ptr = malloc(sizeof(char) * (length + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		ptr[i] = source[i];
	}
	ptr[i] = '\0';

	return (ptr);
}


/**
 * new_dog     - Create a new dog variable
 *
 * @name:        Name of the dog
 * @age:         Age of the dog
 * @owner:       Owner of the dog
 *
 * Return:       Pointer to new dog variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	if (name == NULL)
	{
		free(name);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(owner);
		return (NULL);
	}

	puppy = malloc(sizeof(dog_t));

	if (puppy == NULL)
	{
		return (NULL);
	}

	puppy->name = arg_copy(name);
	puppy->age = age;
	puppy->owner = arg_copy(owner);

	return (puppy);
}
