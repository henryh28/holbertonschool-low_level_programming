#include "hash_tables.h"

/**
 * hash_table_get  - Retrieves value associated with @key from hash table
 *
 * @ht:              Hash table to search against
 * @key:             Key used to retrieve associated value
 *
 * Return:           (Success): Value associated with @key
 *                   (Failure): NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, strdup(key)) == 0)
		{
			/* match, return value */
			return (current->value);
		}
		current = current->next;
	}

	return (NULL);
}
