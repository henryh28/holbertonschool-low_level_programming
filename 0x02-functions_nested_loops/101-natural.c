#include <stdio.h>

/**
 * main -  Computes and prints multiples of 3 and 5 below 1024
 *
 * Return: none
 */

int main(void)
{
	int i, sum;

	for (i = 0; i < 10; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("Sum: %d\n", sum);
	return (0);
}
