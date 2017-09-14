#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Outputs strings to stdout based on conditional expressions
 *
 * Return: (0) for successful execution
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Outputs string based on whether 'n' is positive or negative */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
