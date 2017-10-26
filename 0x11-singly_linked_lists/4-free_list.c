#include "lists.h"

/**
 * free_list     - Frees memory used by @head
 *
 * @head:          Pointer to the linked list to be freed
 */


void free_list(list_t *head)
{
	list_t *current = head;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
