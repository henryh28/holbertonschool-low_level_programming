#include <stdio.h>

/**
 * main - print out even number in fibonacci sequence up to 4,000,000
 *
 * Return: (0) Success
 */


int main(void)
{
	int i;
	long int x, y, z, sum;

	x = 1;
	y = 2;

	for (i = 0; i <= 4000000; i++)
	{
		z = x + y;

		x = y;
		y = z;

		if (y % 2 == 0)
		{
			sum += z;
		}
	}
	printf("%lu\n", sum);

	return (0);
}
