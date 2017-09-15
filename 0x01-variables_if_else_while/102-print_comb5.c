#include <stdio.h>

/**
 * main - Print two sequence of numbers that each range from 00 to 99
 *
 * Description: Sort and print unique compositions of the 2 sequences
 *
 * Return: (0) Success
 */

int main(void)
{
	int i, j, comma;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			comma == 0 ? comma = 1 : putchar(',') && putchar(' ');

			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
		}
	}
	putchar('\n');
	return (0);
}
