#include "holberton.h"
#include "2-strlen.c"

/**
 * _strncat    - Concatenatess @src to @dest by @n bytes
 *
 * @dest:        String for @src to append to
 * @src:         String to be appended to @dest
 * @n:           Number of bytes of @src to append to @dest
 *
 * Return:       Pointer to string @dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int i, dest_length, src_length;

	dest_length = _strlen(dest);
	src_length = _strlen(src);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_length + i] = src[i];
	}

	dest[dest_length + src_length] = '\0';

	return (dest);
}
