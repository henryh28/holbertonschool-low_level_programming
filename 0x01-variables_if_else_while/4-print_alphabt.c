#include <stdio.h>

/**
 * main: Prints the lowercase alphabet except for q & e
 *
 * return: (0) successful execution
 */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; ++letters)
	{
		if (letters != 'q' && letters != 'e')
		{
			putchar(letters);
		}
	}

	putchar('\n');
	return (0);
}

