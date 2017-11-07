#include "holberton.h"

/**
 * append_text_to_file   - Append @text_content to end of @filename
 *
 * @filename:              Name of file to be appended to
 * @text_content:          String argument to be appended to @filename
 *
 * Return:                 (1)  Success
 *                         (-1) Failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, i = 0, write_status;

	if (filename == NULL)
	{
		return (-1);
	}

	file_desc = open(filename, O_APPEND | O_WRONLY);
	if (file_desc == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		write_status = write(file_desc, text_content, i);
	}

	return (write_status == -1 ? (-1) : (1));
}
