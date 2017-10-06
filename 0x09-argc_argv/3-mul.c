#include <stdio.h>
#include <stdlib.h>

/**
 * main     - Outputs value of multiplication of 2 arguments
 *
 * @argc:     Argument count
 * @argv:     Vector of arguments
 *
 * Return:    (0) Success
 *            (1) Error - More than 2 arguments used
 */


int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}


	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
