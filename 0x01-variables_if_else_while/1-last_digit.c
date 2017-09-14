#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Output string based on conditional expressions
 *
 * Description: Outputs different strings based on variable 'n' being
 * greater than 5, zero, or less than 6 and not zero.
 *
 * Return: (0) Successful execution
 */

int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	i = n % 10;

	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, i);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	}

	return (0);
}
