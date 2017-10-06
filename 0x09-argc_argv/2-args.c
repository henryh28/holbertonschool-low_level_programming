#include <stdio.h>

/**
 * main     - Outputs each argument to the program on a separate line
 *
 * @argc:     Argument count
 * @argv:     Vector of arguments
 *
 * Return:     (0) Success
 */


int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);

	}

	return (0);
}
