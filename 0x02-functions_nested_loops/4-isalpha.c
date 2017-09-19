#include "holberton.h"

/**
 * _isalpha - check if function is a letter
 *
 * @c:        Argument to be checked to see if it's a letter
 *
 * Return:    (1) if @c is a letter.
 *            (0) if @c is not a letter
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0);
}


