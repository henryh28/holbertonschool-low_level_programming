#include <stdio.h>

/**
 * main    - Outputs the number of argument used to run this program
 *
 * @argc:    Argument count
 * @argv:    Vector of arguments
 *
 * Return:   (0) Success
 */


int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
