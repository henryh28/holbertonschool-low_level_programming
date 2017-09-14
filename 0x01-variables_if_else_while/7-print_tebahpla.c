#include <stdio.h>

/**
 * main - rever print the lowercase alphabet, followed by newline character
 *
 * Return: (0) succesful execution
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}

