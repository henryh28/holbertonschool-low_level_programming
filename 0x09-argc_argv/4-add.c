#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main   - Outputs the sum of the arguments used to run this program
 *
 * @argc:   Argument count
 * @argv:   Vector of arguments
 *
 * Return:  (0) Success
 *          (1) Error.  Non numeric arguments used
 */


int main(int argc, char **argv)
{
	int i = 1, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) != 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
       	}

	printf("%d\n", sum);
	return (0);
}
