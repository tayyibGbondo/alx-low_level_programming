#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: A pointer to the name of the file to append to.
 * @text_content: The string to append to the end of the file.
 *
 * Return: On success, returns 1.
 *         On failure, returns -1 and sets errno.
 *             Failure cases:
 *                 - filename is NULL
 *                 - the file cannot be opened for writing
 *                 - an error occurs while writing to the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdo, bytes_written, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fdo = open(filename, O_WRONLY | O_APPEND);

	if (fdo == -1)
		return (-1);

	if (len > 0)
	{
		bytes_written = write(fdo, text_content, len);

	if (bytes_written == -1)
		return (-1);
	}

	close(fdo);

	return (1);
}
