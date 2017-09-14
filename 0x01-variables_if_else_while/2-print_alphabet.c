#include <stdio.h>

/**
 * main - Use 'putchar' to print the lowercase alphabet with a newline
 *
 * Return: (0) successful execution
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}

