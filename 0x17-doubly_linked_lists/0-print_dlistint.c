#include "lists.h"

/**
 * print_dlistint - funct that print all element of a doubly linked list
 * @h: poiner to  head  list
 *
 * Return: numbr of  node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		cont++;
		h = h->next;
	}
	return (cont);
}
