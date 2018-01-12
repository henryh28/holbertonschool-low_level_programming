#include "hash_tables.h"

/**
 * key_index     - Generate an index for use by the hash table
 *
 * @key:           Key used to generate the return index value
 * @size:          Size of the array of the hash table
 *
 * Return:         Index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
