#include <stdio.h>

/**
 * main - Output sorted unique occurence of 2 digit combinations
 *
 * Description: 01 and 10 are considered to be the same, and so on
 *
 * Return: (0) Success
 */

int main(void)
{
	int i, j, comma;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			comma == 0 ? comma = 1 : putchar(',') && putchar(' ');

			putchar(i + '0');
			putchar(j + '0');
		}
	}
	putchar('\n');
	return (0);
}
