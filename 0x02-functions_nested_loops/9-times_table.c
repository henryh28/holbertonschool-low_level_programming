#include "holberton.h"

/**
 * times_table - Print the 9 times table, starting with 0
 *
 * Return:       None
 */

void times_table(void)
{
	int i, j, product, format;

	for (i = 0; i <= 9; i++)
	{
		format = 0;
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			format == 0 ? format = 1 : _putchar(',') && _putchar(' ');
			if (product <= 9)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(i * j + '0');
			}
			else
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
