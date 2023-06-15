#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_of_bit;

	if (index > 63)
		return (-1);

	value_of_bit = (n >> index) & 1;

	return (value_of_bit);
}
