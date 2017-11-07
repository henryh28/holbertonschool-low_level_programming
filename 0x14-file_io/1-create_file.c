#include "holberton.h"

#include <stdio.h>

/**
 * create_file   - Create a file and write @text_content into it
 *
 * @filename:      Name of the file to be created
 * @text_content:  String to be written into the new file
 *
 * Return:         (1)  Success
 *                 (-1) Failue
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc, i = 0, write_status;

	if (filename == NULL)
	{
		return (-1);
	}

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_desc == -1)
	{
		return (-1);
	}

	for (i = 0; text_content[i] != '\0'; i++)
		;
	write_status = write(file_desc, text_content, i);

	if (write_status == -1)
	{
		return (-1);
	}

	close(file_desc);

	return (1);
}

/* Reference: http://www.c-sharpcorner.com/UploadFile/a5f59f/ */
/* high-level-and-low-level-inputoutput-functions-in-c-languag/ */
