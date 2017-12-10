#include "lists.h"

/**
 * get_dnodeint_at_index   - Returns @index node of @head
 *
 * @head:                    A doubly linked list
 * @index:                   The index of the node to be returned
 *
 * Return:                   Success: Pointer to @index node of @head
 *                           Failure: NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index--)
	{
		head = head->next;
	}

	return (head == NULL ? NULL : head);
}
