#include "lists.h"

/**
 * _strlen     - Returns length of @s
 *
 * @s:           String argument to find the length of
 *
 * Return:       Length of @s
 */

unsigned int _strlen(const char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}


/**
 * add_node_end     - Add a new node to the end of @head
 *
 * @head:             Singly linked list to attach new node to
 * @str:              String value for the new node
 *
 * Return:            Pointer to the start of linked list @head
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head;

	if (current == NULL)
	{
		current = malloc(sizeof(list_t));
		current->str = strdup(str);
		current->len = _strlen(str);
		current->next = NULL;

		*head = current;
		return (current);
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = malloc(sizeof(list_t));
		current->next->str = strdup(str);
		current->next->len = _strlen(str);
		current->next->next = NULL;
	}
	return (current);
}
