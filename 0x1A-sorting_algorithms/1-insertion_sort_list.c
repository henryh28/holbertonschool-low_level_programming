#include "sort.h"

/**
 * insertion_sort_list   - User Insertion Sort to sort @list
 *
 * @list:                  List to be sorted
 *
 * Return:                 None
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;

	if (list == NULL || current->next == NULL)
	{
		return;
	}
	current = current->next;

	while (current)
	{
		while (current->prev != NULL && current->n < current->prev->n)
		{
			/* Update node before 2 current nodes if exists */
			if (current->prev->prev != NULL)
			{
				current->prev->prev->next = current;
			}

			/* Update node after 2 current nodes if exists */
			if (current->next != NULL)
			{
				current->next->prev = current->prev;
			}

			/* Updates prev/next value of swapped nodes */
			current->prev->next = current->next;
			current->next = current->prev;
			current->prev = current->next->prev;
			current->next->prev = current;

			/* Checks if swapped node is new head of list */
			if (current->prev == NULL)
			{
				*list = current;
			}

			print_list(*list);
		}
		current = current->next;
	}
}
