#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>


/**
 * struct hash   - Return @function that matches corresponding @format
 *
 * @format:        The format that the argument should be printed in
 * @function:      The function associated with a @format
 */

typedef struct hash
{
	char format;
	void (*function)(va_list);
} hash_t;


void print_char(va_list ap);
void print_string(va_list ap);


void print_int(va_list ap);
void print_unsigned(va_list ap);
void print_octal(va_list ap);


void output(char c);
void convert(long int, int);

int _printf(const char *, ...);


#endif
