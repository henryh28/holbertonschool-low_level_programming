#include "function_pointers.h"

/**
 * print_name     - Use callback functions to print out @name
 *
 * @name:           String argument to be passed to callback function
 * @f:              Pointer to callback function
 */


void print_name(char *name, void (*f)(char *))
{
	f(name);
}
