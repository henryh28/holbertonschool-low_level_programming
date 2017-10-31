#include "lists.h"

/**
 * add_nodeint     - Add a new node at the beginning of @head
 *
 * @head:            Singly linked list
 * @n:               Value of new node to be inserted to start of @head
 *
 * Return:           (Success) Address of the new element
 *                   (Failure) Null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
