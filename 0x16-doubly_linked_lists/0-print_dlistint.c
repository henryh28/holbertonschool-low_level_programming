#include "lists.h"

/**
 * print_dlistint     - Print all elements of list @h
 *
 * @h:                  A doubly linked list
 *
 * Return:              Number of nodes in @h
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
