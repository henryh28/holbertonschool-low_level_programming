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
		new->prev = current->prev;
		new->next = current;
		current->prev->next = new;
		current->prev = new;
	}

	return (new);
}
