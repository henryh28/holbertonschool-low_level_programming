#include <stdio.h>
#include <stdlib.h>

/**
 * main   - Return the minimum number of coins needed to make change for @argv
 *
 * @argc:   Argument count
 * @argv:   Numeric integer used to run program
 *
 * Return:  (0) Success
 */


int main(int argc, char **argv)
{
	int denomination[] = {25, 10, 5, 2, 1};
	int *ptr = denomination;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]))
	{
		int amount = atoi(argv[1]);

		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
		}
		else
		{
			while (amount > 0)
			{
				if (amount >= *ptr)
				{
					amount -= *ptr;
					coins++;
				}
				else
				{
					ptr = ptr + 1;
				}
			}
		}
	}

	printf("%d\n", coins);
	return (0);
}
