#include "lists.h"

/**
 * free_listint     - Frees memory used by @head
 *
 * @head:             Singly linked list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
