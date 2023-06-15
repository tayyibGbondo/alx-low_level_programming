#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: character to print
 * Return: On sucess 1.
 * On error, -1 is returned, and errno is set appropriat.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
