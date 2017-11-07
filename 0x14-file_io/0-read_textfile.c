#include "holberton.h"

/**
 * read_textfile   - Output content of text file to standard output
 *
 * @filename:        Name of file to be read
 * @letters:         Number of letters that should be read and printed
 *
 * Return:           Number of letters that can be read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, read_amount = 0;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL || buffer == NULL)
	{
		return (0);
	}

	/* use open to point file_descriptor to file on disk */
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}

	/* Reads 'letters' number of characters from file into buffer */
	read_amount = read(file_descriptor, buffer, letters);
	if (read_amount == -1)
	{
		return (0);
	}

	/* Output 'read_amount' # of characters from buffer to stdout*/
	write(STDOUT_FILENO, buffer, read_amount);

	close(file_descriptor);

	free(buffer);

	return (read_amount);
}

/* Reference: http://www.c-sharpcorner.com/UploadFile/a5f59f/ */
/* high-level-and-low-level-inputoutput-functions-in-c-languag/ */
