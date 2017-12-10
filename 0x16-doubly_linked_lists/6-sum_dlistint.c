#include "lists.h"

/**
 * sum_dlistint     - Returns sum of member 'n' from all nodes in @head
 *
 * @head:             A doubly linked list
 *
 * Return:            Sum of all member 'n' in doubly linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
