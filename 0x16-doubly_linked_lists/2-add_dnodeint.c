#include "lists.h"

/**
 * add_dnodeint     - Add a new node to the beginning of @head
 *
 * @head:             A doubly linked list
 * @n:                Value for the newly created node
 *
 * Return:            Pointer to the modified @head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
