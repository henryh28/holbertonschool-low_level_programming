#include "holberton.h"
#include "2-strchr.c"

/**
 * _strpbrk    - Locate the first occurence of any char from @accept in @s
 *
 * @s:           The string to be searched against
 * @accept:      The characters to be searched for against @s
 *
 * Return:       Pointer to @s if matches to @accept is found
 *               (NULL) if no match is found
 */


char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s++))
		{
			return (--s);
		}
	}

	return (0);
}
