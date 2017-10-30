#include "lists.h"

/**
 * sum_listint    - Return sum of all value from all nodes in @head
 *
 * @head:           Singly linked list to be iterated through
 *
 * Return:          Sum of all value from nodes in @head
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
