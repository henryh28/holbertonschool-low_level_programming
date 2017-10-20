#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings    - Print string arguments followed by a newline
 *
 * @separator:        String to be printed between string arguments
 * @n:                Number of string arguments passed to function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
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

		printf("%s", va_arg(ap, char*));
	}

	va_end(ap);

	printf("\n");
}
