#include <stdio.h>

/**
 * main -  It's fizzbuzz. In C.
 *
 * Return: (0) Success
 */


int main(void)
{
	int i, space;

	for (i = 1; i <= 100; i++)
	{
		space == 0 ? space = 1 : putchar(' ');
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	putchar('\n');
	return (0);
}
