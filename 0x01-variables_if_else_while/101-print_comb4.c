#include <stdio.h>

/**
 * main - Output sorted unique occurence of 3 digit combinations
 *
 * Description: 012,120,102,021,201 & 210 considered to be the same combination
 *
 * Return: (0) Success
 */

int main(void)
{
	int i, j, k, comma;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				comma == 0 ? comma = 1 : putchar(',') && putchar(' ');

				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}
