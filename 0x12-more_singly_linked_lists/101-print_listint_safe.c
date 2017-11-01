#include "lists.h"

/**
 * print_listint_safe   - Prints content of @head
 *
 * @head:                 Singly linked list that is to be printed
 *
 * Return:                Numberof nodes in @head
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t total = 0, i = 0;
	listint_t *right, *left = NULL;
	listint_t *current = (listint_t *)head;
	/* nasty array size declaraction due to exercise constraints */
	void *mem[99] = {0};

	while (current != NULL)
	{
		for (i = 0; i < total; i++)
		{
			if (mem[i] == (void *)current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				exit(98);
			}
		}

		printf("[%p] %d\n", (void *)current, current->n);
		/* array size realloc here when allowed to do so */
		mem[total] = (void *)current;

		right = current->next;
		current->next = left;
		left = current;
		current = right;

		total++;
	}
	head = left;

	return (total);
}
