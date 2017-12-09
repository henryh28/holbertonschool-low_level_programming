#include "lists.h"

/**
 * dlistint_len     - Returns the number of elements in @h
 *
 * @h:                A doubly linked list
 *
 * Return:            Number of nodes in @h
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
