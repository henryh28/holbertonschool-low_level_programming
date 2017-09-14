#include <stdio.h>

/**
 * main: Print hexadecimal values using putchar
 *
 * return: (0) successful execution
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}

	putchar('\n');
	return (0);
}
