#include "hash_tables.h"

/**
 * hash_djb2     - Explanation at http://www.cse.yorku.ca/~oz/hash.html
 *
 * @str:           String argument used to derive the return hash value
 *
 * Return:         Hash value of @str
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
