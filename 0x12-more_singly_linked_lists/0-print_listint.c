#include "lists.h"

/**
 * print_listint     - Print all elements of linked list @h
 *
 * @h:                 Singly linked list
 *
 * Return:             Number of nodes in @h
 */


size_t print_listint(const listint_t *h)
{
	size_t total = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		total++;
		h = h->next;
	}

	return (total);
}
