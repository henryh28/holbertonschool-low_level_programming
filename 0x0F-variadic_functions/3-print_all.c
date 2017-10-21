#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char    - Print out a character
 *
 * @ap:            list containing program arguments
 * @v:             Value to be printed
 */

void print_char(va_list ap, char v)
{
	printf("%c", v);
}


/**
 * print_int     - Print out an integer
 *
 * @ap:            list containing program arguments
 * @v:             Value to be printed
 */

void print_int(va_list ap, int v)
{

}


/**
 * print_float   - Print out a float
 *
 * @ap:            list containing program arguments
 * @v:             Value to be printed
 */

void print_float(va_list ap, float v)
{

}


/**
 * print_string  - Print out a string
 *
 * @ap:            list containing program arguments
 * @v:             Value to be printed
 */

void print_string(va_list ap, char *v)
{

}




/**
 * print_all     - Print all arguments as char, int, float, or char*
 *
 * @format:        Format that the arguments are to be printed as
 *                 Valid options: c - char, i - int, f - float, s - char*
 */

void print_all(const char * const format, ...)
{
	int i = 0, n = 0;
	va_list ap;

	hash_t hash[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	}

	va_start(ap, format);

	while (format[i] != '\0')
	{

		i++;
	}

	va_end(ap);

	printf("Format length: %d\n", i);


}
