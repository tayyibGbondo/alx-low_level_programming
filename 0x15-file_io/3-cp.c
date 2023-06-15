#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_bufer(char *fil);
void close_fil(int fd);

/**
 * create_bufer - Allocats 1024 bytes for a buffer.
 * @fil: The name of the file buffer is storing chars .
 *
 * Return: A pointer to the newlly-allocated buffer.
 */
char *create_bufer(char *fil)
{
	char *bufer;

	bufer = malloc(sizeof(char) * 1024);

	if (bufer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fil);
		exit(99);
	}

	return (bufer);
}

/**
 * close_fil - Clos file descriptos.
 * @fd: The file descriptor to be clossed.
 */
void close_fil(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copes the content of a file to another fil.
 * @argcl: The numbr of argoment suplied to the program.
 * @argvl: An array of pointer to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argoment count is incorrect - exit code 97.
 * If file_from does not exist or can not be read - exit code 98.
 * If file_to cannot be creat  to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argcl, char *argvl[])
{
	int from, to, r, w;
	char *bufer;

	if (argcl != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bufer = create_bufer(argvl[2]);
	from = open(argvl[1], O_RDONLY);
	r = read(from, bufer, 1024);
	to = open(argvl[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argvl[1]);
			free(bufer);
			exit(98);
		}

		w = write(to, bufer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argvl[2]);
			free(bufer);
			exit(99);
		}

		r = read(from, bufer, 1024);
		to = open(argvl[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(bufer);
	close_fil(from);
	close_fil(to);

	return (0);
}
