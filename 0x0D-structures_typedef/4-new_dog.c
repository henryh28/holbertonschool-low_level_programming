#include <stdlib.h>
#include "dog.h"

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
	int i = 0, name_length = 0, owner_length = 0;
	char *name_copy, *owner_copy;

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

	for (name_length = 0; name[name_length] != '\0'; name_length++)
		;
	for (owner_length = 0; owner[owner_length] != '\0'; owner_length++)
		;
	name_copy = malloc(sizeof(char) * name_length);
	owner_copy = malloc(sizeof(char) * owner_length);
	for (i = 0; i < name_length; i++)
	{
		name_copy[i] = name[i];
	}
	for (i = 0; i < owner_length; i++)
	{
		owner_copy[i] = owner[i];
	}

	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
	{
		return (NULL);
	}
	puppy->name = name_copy;
	puppy->age = age;
	puppy->owner = owner_copy;

	return (puppy);
}
