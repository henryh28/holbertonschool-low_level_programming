#include <stdio.h>

/**
 * main - Find and print the largest prime factors of 612852475143
 *
 * Return: Largest prime factors of 612852475143
 */

int main(void)
{
	long int target, divisor;

	divisor = 2;
	target = 612852475143;

	while (target / divisor != 1)
	{
		target % divisor != 0 ? divisor++ : (target = target / divisor);
	}
	printf("%lu\n", target);
	return (0);
}
