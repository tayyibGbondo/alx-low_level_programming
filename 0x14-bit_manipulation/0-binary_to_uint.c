#include "main.h"

/**
 * binary_to_uint - converts a binary numbr to unsigned int
 * @b: string containing the binary numbr
 *
 * Return: the converted numbr
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int dec_number = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		dec_number = 2 * dec_number + (b[x] - '0');
	}

	return (dec_number);
}
