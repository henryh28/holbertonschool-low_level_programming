#include <stdio.h>

/**
 * main - Outputs numbers from 00 to 99 with comma and space in between
 *
 * return: (0) Successful execution
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		j = 0;
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');
			j++;


			if (i + j <= 18)
			{
				putchar(',');
				putchar(' ');

			}
		}
	}

	putchar('\n');
	return (0);
}


