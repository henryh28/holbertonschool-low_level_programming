#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"


/**
 * main     - Perform simple math operations on 2 integer arguments
 *
 * @argc:     Integer value of number of arguments
 * @argv:     Vector containing strings of arguments
 *
 * Return:    (0) On Success
 */


int main(int argc, char **argv)
{
	int a = 0, b = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (get_op_func(argv[2]))(a, b));

	return (0);
}
