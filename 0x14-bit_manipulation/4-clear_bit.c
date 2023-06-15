#include "main.h"
/**
 * clear_bit - set the valu of a givn bit to 0
 * @n: pointer to the numbr to chang
 * @index: indx of the bit to clear
 *
 * Return: 1 for sucess, -1 for failur
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
