#include "holberton.h"
#include <stdarg.h>

/**
 * interpolate   - Assist printf with processing data interpolation
 *
 * @string:        The base string to be printed
 * @string_index:  The index in @string that triggered interpolation
 * @ap:            variadic list containing arguments to be processed
 *
 * Return:       (0) Success
 */

int interpolate(const char *string, int string_index, va_list ap)
{
	int hash_index = 0, length = 0, escape = 0;

	hash_t hash[] = {
		{'c', print_char}, {'s', print_string},
		{'i', print_int}, {'d', print_int},
		{'u', print_unsigned}, {'o', print_octal}
	};

	length = sizeof(hash) / sizeof(*hash);


	for (hash_index = 0; hash_index < length; hash_index++)
	{
		if (string[string_index + 1] == hash[hash_index].format)
		{
			hash[hash_index].function(ap);
			string_index++;
			escape = 1;
		}
	}

	if (escape == 0)
	{
		output('%');
		if (string[string_index + 1] != '%')
		{
			output(string[string_index + 1]);
		}
		string_index++;
	}

	return (string_index);
}


/**
 * _printf     - Print @format using string and data interpolation where needed
 *
 * @format:      The string to be printed. Use '%' to trigger interpolation
 *
 * Return:       (0) Success
 */

int _printf(const char *format, ...)
{
	int string_index = 0;
	va_list ap;


	va_start(ap, format);

	while (format[string_index] != '\0')
	{
		if (format[string_index] == '%')
		{
			string_index = interpolate(format, string_index, ap);
		}
		else
		{
			output(format[string_index]);
		}
		string_index++;
	}
	va_end(ap);
	return (0);
}
