#include "holberton.h"

/**
 * _islower - check input for lowercase characters
 *
 * @c:        Input character to be checked for lowercase status
 *
 * Return:    (1) if input is lowercase
 *            (0) if input is not lowercase
 */

int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
