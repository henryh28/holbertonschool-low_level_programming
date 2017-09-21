#include "holberton.h"

/**
 * _isupper - Test if function argument is uppercase letter
 *
 * @c:        Integer argument to be tested for uppercase status
 *
 * Return:    (1) If argument is uppercase
 *            (0) If argument is not uppercase
 */


int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
