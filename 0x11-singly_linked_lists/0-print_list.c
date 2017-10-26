#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen     - Returns length of @str argument
 *
 * @str:         String argument to be operated on
 *
 * Return:       Length of the @str argument
 */

int _strlen(char *str)
{
	unsigned int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}


/**
 * print_list  - Outputs data related to @h
 *
 * @h:           Pointer to the start of a singly linked list
 *
 * Return:       Number of nodes in the @h linked list
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	list_t *current = (list_t *)h;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			current->len = _strlen(current->str);
		}
		else
		{
			current->len = 0;
			current->str = "(nil)";
		}

		printf("[%d] %s\n", current->len, current->str);
		n++;

		current = current->next;
	}

	return (n);
}
