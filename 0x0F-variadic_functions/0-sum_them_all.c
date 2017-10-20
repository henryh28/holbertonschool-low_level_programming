#include <stdarg.h>

/**
 * sum_them_all     - Output the sum of all arguments
 *
 * @n:                Number of arguments
 *
 * Return:            Sum of all arguments
 */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
