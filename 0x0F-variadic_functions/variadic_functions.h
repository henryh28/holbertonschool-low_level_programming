#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct hash   - Return function that matches the @format
 *
 * @format:        The format that the argument should be printed in
 * @function:      The function associated with @format, if any
 */


typedef struct hash
{
	char format;
	void (*function)(va_list);
} hash_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif
