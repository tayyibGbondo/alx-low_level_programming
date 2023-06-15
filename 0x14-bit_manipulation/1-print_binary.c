#include "main.h"

/**
 *  print_binary - prints the binary equivalent of a deciml numbr
 *  @n: numbr to print in binry
 *
 */
void print_binary(unsigned long int n)
{
	int bit_index;
	int num_of_ones = 0;

	unsigned long int current_bit;

	for (bit_index = 63; bit_index >= 0; bit_index--)
	{
		current_bit = n >> bit_index;

		if (current_bit & 1)
		{
			_putchar('1');
			num_of_ones++;
		}
		else if (num_of_ones)
			_putchar('0');
	}
	if (!num_of_ones)
		_putchar('0');
}
