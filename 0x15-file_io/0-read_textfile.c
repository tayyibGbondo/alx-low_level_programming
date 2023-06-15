#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read text fil printf to STDOUT.
 * @filename: text fil being read
 * @letters: numbr of letter to be reading
 * Return: w- actual numer of byte reed and print
 * 0 when function fail or filename is NULL.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t bytes_read;
	ssize_t bytes_written;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	bytes_read = read(file_descriptor, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file_descriptor);
	return (bytes_written);
}
