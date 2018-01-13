#include "hash_tables.h"

/**
 * hash_table_delete   - Delete @ht
 *
 * @ht:                  Hash table to be deleted
 *
 * Return:               None
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *target;
	unsigned long int index = 0;

	if (ht == NULL)
	{
		return;
	}

	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];

		while (current)
		{
			target = current;
			current = current->next;

			free(target->key);
			free(target->value);
			free(target);
		}
	}
	free(ht->array);
	free(ht);
}
