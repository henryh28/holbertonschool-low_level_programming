#include "holberton.h"

/**
 * _isdigit - Check if function argument is a digit
 *
 * @c:        Integer argument to be tested for integer status
 *
 * Return:    (1) if @c is a digit
 *            (0) if @c is not a digit
 */


int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
