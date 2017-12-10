#include "lists.h"

/**
 * free_dlistint     - Free up memory used by @head
 *
 * @head:              A doubly linked list
 */

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
