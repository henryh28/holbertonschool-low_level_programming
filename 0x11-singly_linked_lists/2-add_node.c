#include "lists.h"


unsigned int _strlen(const char *s)
{
	int i = 0;

	for (i = 0; s[i] !='\0'; i++)
		;

	return (i);
}


/**
 * add_node     - Add a node to the beginning of @head linked list
 *
 * @head:         Initial node of a singly linked list
 * @str:          String value to be in the newly inserted node
 *
 * Return:        Pointer to the beginning of the @head linked list
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
        new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;


	return (new_node);
}
