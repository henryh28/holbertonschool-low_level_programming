#include "lists.h"

/**
 * delete_dnodeint_at_index   - Delete a node at @index from @head
 *
 * @head:                       Head of a doubly linked list
 * @index:                      Index of the node to delete from @head
 *
 * Return:                      Success: 1
 *                              Failure: -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *target;
	int counter = index;

	if (counter < 0)
		return (-1);

	while (counter-- && head != NULL)
	{
		current = current->next;
	}

	if (current != NULL)
	{
		if (index == 0)
		{
			target = current;
			if (current->next != NULL)
			{
				*head = current->next;
				(*(head))->prev = NULL;
			}
			else
			{
				(*(head)) = NULL;
			}
			free(target);
			return (1);
		}

		current->prev->next = current->next;
		if (current->next != NULL)
		{
			current->next->prev = current->prev;
		}
		free(current);
		return (1);
	}

	return (-1);
}
