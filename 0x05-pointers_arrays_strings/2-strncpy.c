#include "holberton.h"

/**
 * strncpy   - Copies one string into another string
 *
 * @dest:      The string to be copied into and returned
 * @src:       The string to be copied
 * @n:         The number of bytes to copy from @src into @dest
 *
 * Return:     Pointer to @dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	if (n > i)
	{
		dest[i] = '\0';
	}

	return (dest);
}
