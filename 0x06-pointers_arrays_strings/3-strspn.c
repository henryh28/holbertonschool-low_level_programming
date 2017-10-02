#include "holberton.h"
#include "2-strchr.c"

/**
 * _strspn    - Searchs string @s for @accept, return # of occurence in bytes
 *
 * @s:          String to be searched against
 * @accept:     Substring to search for in @s
 *
 * Return:      Size in bytes of @accept
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s && _strchr(accept, *s++))
	{
		i++;
	}

	return (i);
}


