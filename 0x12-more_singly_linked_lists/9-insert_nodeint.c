#include "lists.h"

/**
 * insert_nodeint_at_index    - Inserts new node into @head at index @idx
 *
 * @head:                       Linked list to be modified
 * @idx:                        Index for node to be inserted into @head
 * @n:                          Value for new node to be inserted
 *
 * Return:                      (Success) Address of new node
 *                              (Failure) NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (--idx)
	{
		if (current->next != NULL)
		{
			current = current->next;
		}
		else
		{
			return (NULL);
		}
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
