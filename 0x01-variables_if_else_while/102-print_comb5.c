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
	int i, j, x, y, comma;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (x = i; x <= 9; x++)
			{
				for (y = j + 1; y <= 9; y++)
				{
					comma == 0 ? comma = 1 : putchar(',') && putchar(' ');
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(x + '0');
					putchar(y + '0');
				}
			}
		}
	}


	putchar('\n');
	return (0);
}
