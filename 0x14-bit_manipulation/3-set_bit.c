#include "main.h"

/**
 * set_bit - sets a bit at a givn indx to 1
 * @n: pointer to the numbr to chnge
 * @index: indx of the bit to set to 1
 *
 * Return: 1 for succss, -1 for failur
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
