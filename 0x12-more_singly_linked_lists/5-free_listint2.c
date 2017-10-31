#include "lists.h"

/**
 * free_listint2     - Frees memory used by @head and sets it to NULL
 *
 * @head:              Singly linked list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
