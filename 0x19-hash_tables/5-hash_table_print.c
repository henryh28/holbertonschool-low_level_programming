#include "hash_tables.h"

/**
 * hash_table_print   - Print out content of @ht
 *
 * @ht:                 Hash table to er printed out
 *
 * Return:              Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int index = 0;
	int format = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (index =  0; index < ht->size; index++)
	{
		current = ht->array[index];

		while (current)
		{
			format == 0 ? format = 1 : putchar(',') && putchar(' ');
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
		}
	}
	printf("}\n");
}
