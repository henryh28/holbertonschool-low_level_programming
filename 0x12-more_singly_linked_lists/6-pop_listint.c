#include "lists.h"

/**
 * pop_listint     - Removes top node of @head
 *
 * @head:            Singly linked list
 *
 * Return:           Data of the removed top element from @head
 */

int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int data = 0;

	*head = (*head)->next;
	data = current->n;

	free(current);

	return (data);
}
