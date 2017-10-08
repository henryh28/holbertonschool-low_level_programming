#include <stdio.h>

/**
 * main     - Outputs this program's name
 *
 * @argc:     Argument count
 * @argv:     Vector of arguments supplied to program
 *
 * Return:    None
 */


int main(int argc, char **argv)
{
	if (argc)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
