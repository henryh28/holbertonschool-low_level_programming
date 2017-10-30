#include "lists.h"

/**
 * add_nodeint_end     - Adds a new node to the end of @head
 *
 * @head:                Singly linked list
 * @n:                   Value for new node to be added to end of @head
 *
 * Return:               (Success) Address of newly created node
 *                       (Failure) NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new;

	return (new);
}
