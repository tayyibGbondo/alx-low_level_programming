#include "main.h"
/**
 * get_endianness - checks if a machine is smal  or big endianness
 * Return: 0 for big, 1 for smal
 *
 */
int get_endianness(void)
{
	unsigned int test_value = 1;
	char *byte_pointer = (char *) &test_value;

	return (*byte_pointer);
}
