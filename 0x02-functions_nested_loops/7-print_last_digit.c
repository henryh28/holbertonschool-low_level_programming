#include "holberton.h"

/**
 * print_last_digit - outputs the last digit of function argument
 *
 * @n: Truncate and return last digit of this argument
 *
 * Return: Value of last digit of @n
 */

int print_last_digit(int n)
{
	int result = n % 10;

	result = result < 0 ? result * -1 : result;
	_putchar(result + '0');
	return (result);

}

