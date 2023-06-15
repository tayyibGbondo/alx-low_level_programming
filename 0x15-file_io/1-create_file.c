#include "main.h"

/**
 * create_file - Creates a new file with given name and writes
 * the given text to the file.
 * @filename: A pointer to the name of the file to be created.
 * @text_content:a pointer to a string to write to the file.
 *
 * Return: If the function fails -1, otherwise 1.
 *
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, len = 0, bytes_written = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_written = write(file_desc, text_content, len);

	if (file_desc == -1 || bytes_written == -1)
		return (-1);

	close(file_desc);
	return (1);
}
