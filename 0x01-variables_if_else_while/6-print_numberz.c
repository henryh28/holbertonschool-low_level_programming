#include <stdio.h>

/**
 * main - Print numbers from 0-9 using putchar
 *
 * Return: (0) successful execution
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');
	return (0);
}
