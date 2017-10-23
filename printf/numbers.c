#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"


/**
 * print_number     - Output @value
 *
 * @value:            The value to be printed
 */


void print_number(unsigned int value)
{
	int reverse = 0, depth = 0, print_value = 0, i = 0;

	while (value != 0)
	{
		reverse *= 10;
		reverse += (value % 10);
		value /= 10;
		depth++;
	}

	depth = depth == 0 ? 1 : depth;

	for (i = 0; i < depth; i++)
	{
		print_value = reverse % 10;
		output(print_value + '0');
		reverse /= 10;
	}
}


/**
 * print_int        - Extract argument from @ap and prep it to be printed
 *
 * @ap:               Variadic list containing arguments to be processed
 */


void print_int(va_list ap)
{

	int value = va_arg(ap, int);

	if (value < 0)
	{
		output('-');
		value *= -1;
	}

	print_number(value);
}


/**
 * print_unsigned   - Extract argument from @ap and prep it to be printed
 *
 * @ap:               Variadic list containing arguments to be processed
 */


void print_unsigned(va_list ap)
{
	unsigned int value = va_arg(ap, unsigned int);

	print_number(value);
}


/**
 * print_octal      - Extract argument from @ap and prep it to be printed
 *
 * @ap:               Variadic list containing arguments to be processed
 */

void print_octal(va_list ap)
{
	unsigned int value = va_arg(ap, unsigned int);

	convert(value, 8);
}
