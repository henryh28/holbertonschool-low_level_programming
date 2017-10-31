#include "lists.h"

/**
 * reverse_listint     - Reverses the order of the nodes in @head
 *
 * @head:                Singly linked list to be reversed
 *
 * Return:               Pointer to the first node of reversed @head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *right, *left = NULL;

	while (*head != NULL)
	{
		right = (*head)->next;
		(*head)->next = left;
		left = *head;
		*head = right;
	}
	*head = left;

	return (*head);
}
