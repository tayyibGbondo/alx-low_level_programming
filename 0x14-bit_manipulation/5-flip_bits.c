#include "main.h"
/**
 * flip_bits - counts the numbr of bits to chang
 * to get from one numbr to anothr
 * @n: first numbr
 * @m: secnd numbr
 *
 * Return: numbr of bit to chang
 *
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit_index;
	int num_of_ones = 0;
	unsigned long int current_bit;
	unsigned long int exclusive = n ^ m;

	for (bit_index = 63; bit_index >= 0; bit_index--)
	{
		current_bit = exclusive >> bit_index;
		if (current_bit & 1)
			num_of_ones++;
	}

	return (num_of_ones);
}

