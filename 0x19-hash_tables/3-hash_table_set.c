#include "hash_tables.h"

/**
 * hash_table_set     - Adds an element to the hash table
 *
 * @ht:                 The hash table to be operated on
 * @key:                Key of the element. Cannot be an empty string
 * @value:              Value associated with @key. Can be an empty string
 *
 * Return:              (Success): 1
 *                      (Failure): 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	unsigned long int index = key_index((unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || value == NULL || ht->array == NULL)
	{
		return (0);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index] != NULL)
	{
		/* collision */
		current = ht->array[index];
		while (current != NULL)
		{
			if (strcmp(current->key, strdup(key)) == 0)
			{
				/* existing key, update value only */
				current->value = strdup(value);
				free(new_node);
				return (1);
			}
			current = current->next;
		}
		/* collision with new key, add new element */
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
	/* Empty index, add new node only */
	ht->array[index] = new_node;
	return (1);
}
