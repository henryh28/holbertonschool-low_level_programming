#include "lists.h"

/**
 * insert_dnodeint_at_index   - Insert a new node at @idx into @h if able
 *
 * @h:                          Doubly linked list
 * @idx:                        Index where new node should be inserted
 * @n:                          Member value of new node
 *
 * Return:                      Success: Address of newly created node
 *                              Failure: NULL
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *current = *h;

	idx--;
	while (idx-- && h != NULL)
	{
		current = current->next;
	}

	if (current != NULL)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
		{
			return (NULL);
		}

		new->n = n;
		new->prev = current;
		new->next = current->next;
		current->next = new;
		if (current->next != NULL)
		{
			current->next->prev = new;
		}
	}

	return (new);
}
