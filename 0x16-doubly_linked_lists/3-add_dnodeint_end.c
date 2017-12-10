#include "lists.h"

/**
 * add_dnodeint_end     - Add a new node to the end of @head
 *
 * @head:                 A doubly linked list
 * @n:                    Value of the newly created node
 *
 * Return:                Pointer to the @head of the updated list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	current = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (current == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new;
	new->prev = current;

	return (new);
}
