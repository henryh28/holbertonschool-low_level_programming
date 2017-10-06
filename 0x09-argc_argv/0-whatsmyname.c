#include "holberton.h"

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
		_puts(*argv);
	}
	return (0);
}
