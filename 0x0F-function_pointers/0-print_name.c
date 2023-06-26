#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function that prints a name
 * @name: Type char string pointer
 * @f: Type pointer func & char is arg
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

