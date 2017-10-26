#include "lists.h"

/**
 * print_list  - Outputs data related to @h
 *
 * @h:           Pointer to the start of a singly linked list
 *
 * Return:       Number of nodes in the @h linked list
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		n++;

		h = h->next;
	}

	return (n);
}
