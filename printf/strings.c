#include <stdarg.h>
#include "holberton.h"

/**
 * print_char     - Print a single character
 *
 * @ap:             Variadic list containing arguments to interpolate
 */


void print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);

	output(c);
}


/**
 * print_string   - Print a single character
 *
 * @ap:             Variadic list containing arguments to interpolate
 */


void print_string(va_list ap)
{
	int i = 0;
	char *string = va_arg(ap, char*);

	for (i = 0; string[i] != '\0'; i++)
	{
		output(string[i]);
	}
}
