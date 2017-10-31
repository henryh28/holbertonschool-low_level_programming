#include "lists.h"

/**
 * get_nodeint_at_index   - Returns node from linked list @head at @index
 *
 * @head:                   Singly linked list
 * @index:                  Index value of node to be returned from @head
 *
 * Return:                  Address of node from @head at @index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head != NULL)
	{
		while (index--)
		{
			head = head->next != NULL ? head->next : NULL;
		}
	}

	return (head);
}
