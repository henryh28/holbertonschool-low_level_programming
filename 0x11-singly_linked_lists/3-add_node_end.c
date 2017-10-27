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
	list_t *current = *head, *new_node;

	if (str == NULL)
	{
		return (NULL);
	}

	if (current == NULL)
	{
		current = malloc(sizeof(list_t));
		if (current == NULL)
		{
			return (NULL);
		}
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

		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		current->next = new_node;
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = NULL;
	}
	return (current);
}
