#include <stdio.h>

/**
 * main: prints the lowercase alphabet followed by the uppercase alphabet
 *
 * return: (0) successful execution
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (i = 'A'; i <= 'Z'; ++i)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
