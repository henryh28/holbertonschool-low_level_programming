#include "lists.h"

/**
 * listint_len     - Return the number of elements in @h
 *
 * @h:               Singly linked list
 *
 * Return:           Number of nodes in @h
 */

size_t listint_len(const listint_t *h)
{
	size_t total = 0;

	while (h != NULL)
	{
		total++;
		h = h->next;
	}

	return (total);
}
