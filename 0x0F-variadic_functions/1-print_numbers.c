#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * print_numbers     - Print numeric arguments with @separator in between
 *
 * @separator:         Character used to separate the arguments when printing
 * @n:                 Number of integers passed to the function
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && i != n)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}

		printf("%d", va_arg(ap, int));
	}

	va_end(ap);
	printf("\n");
}
