#include "holberton.h"
#include <stdio.h>
/**
 * print_number - Print out user supplied numbers
 *
 * @n:            The number to be printed out
 *
 * Return:        None
 */


void print_number(int n)
{
	int decimal, print_digit, remaining, check;

	decimal = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		return;
	}

	while (n / decimal > 9)
	{
		decimal *= 10;
		check = n / (decimal / 10);
	}

	print_digit = n / decimal;
	remaining = n % decimal;

	if (check % 10 == 0)
	{
		_putchar(print_digit + '0');
		_putchar(print_digit / 10 + '0');
		print_number(remaining);
	}
	else if (remaining > 9)
	{
		_putchar(print_digit + '0');
		print_number(remaining);
	}
	else if (remaining != 0)
	{
		_putchar(print_digit + '0');
		_putchar(remaining + '0');
	}
}
