#include "lists.h"

/**
 * delete_nodeint_at_index   - Delete node at @index from @head
 *
 * @head:                      Linked list to delete node at @index from
 * @index:                     Index value of the node to deleted
 *
 * Return:                     (Success) 1
 *                             (Failure) -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *target, *current = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		target = current;
		*head = (*head)->next;
		free(target);

		return (1);
	}

	while (--index)
	{
		if (current->next != NULL)
		{
			current = current->next;
		}
		else
		{
			return (-1);
		}
	}

	target = current->next;
	current->next = current->next->next;
	free(target);

	return (1);
}
