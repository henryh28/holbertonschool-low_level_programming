#include <stdio.h>

/**
 * main - test
 *
 * Description: stuff
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
