#include "lists.h"

/**
 * list_len     - Return the number of nodes in linked list argument @h
 *
 * @h:            A singly linked list
 *
 * Return:        Number of nodes in @h
 */


size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}

	return (length);
}
