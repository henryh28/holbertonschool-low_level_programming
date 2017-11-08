#include "holberton.h"

#define BUFFER_SIZE 1024

/**
 * print_error   - Prints out error message and exits with @code
 *
 * @file:          Name of file that triggered error
 * @code:          Error code
 */

void print_error(char *file, int code)
{
	if (code == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}

	if (code == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	}

	if (code == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	}

	exit(code);
}


/**
 * main          - Copies content of one file to a new file
 *
 * @argc:          Number of argument passed to program
 * @argv:          Array holding arguments passed to program
 *
 * Return:         (0) Success
 */

int main(int argc, char **argv)
{
	int file_from, file_to, chars_left, chars_written, close_check;
	char *buffer[BUFFER_SIZE];
	mode_t permission = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		print_error("", 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error(argv[1], 98);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, permission);
	if (file_to == -1)
		print_error(argv[2], 99);

	do {
		chars_left = read(file_from, buffer, BUFFER_SIZE);
		if (chars_left == -1)
			print_error(argv[1], 98);

		chars_written = write(file_to, buffer, chars_left);
		if (chars_written == -1)
			print_error(argv[2], 99);

		*buffer += chars_written;
	} while (chars_left > 0);

	close_check = close(file_from);
	if (close_check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_check = close(file_to);
	if (close_check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}

/* Reference: https://phoenix.goucher.edu/~kelliher/cs43/mar26.html */
