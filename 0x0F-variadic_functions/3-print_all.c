#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char    - Print out a character
 *
 * @ap:            list containing program arguments
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}


/**
 * print_int     - Print out an integer
 *
 * @ap:            list containing program arguments
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}


/**
 * print_float   - Print out a float
 *
 * @ap:            list containing program arguments
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}


/**
 * print_string  - Print out a string
 *
 * @ap:            list containing program arguments
 */

void print_string(va_list ap)
{
	char *string = va_arg(ap, char*);

	if (string == NULL)
	{
		string = "(nil)";
	}
	printf("%s", string);
}




/**
 * print_all     - Print all arguments as char, int, float, or char*
 *
 * @format:        Format that the arguments are to be printed as
 *                 Valid options: c - char, i - int, f - float, s - char*
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0, length = 0;
	char *comma = "";
	va_list ap;

	hash_t hash[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	length = sizeof(hash) / sizeof(*hash);

	va_start(ap, format);

	while (format[i] != '\0')
	{
		j = 0;

		while (j < length)
		{
			if (format[i] == hash[j].format)
			{
				printf("%s", comma);
				hash[j].function(ap);
				comma = ", ";
				j++;
				break;
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
