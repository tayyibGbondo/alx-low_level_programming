#include "lists.h"

/**
 * get_dnodeint_at_index - functs get nth node of  list index
 * @head: pointr head of list
 * @index: positon of node starting from 0.
 *
 * If the nodes do  not exist, return NULL.
 *
 * Return: the nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ii;

	ii = 0;

	if (!head)
		return (NULL);

	while (head != NULL)
	{
		if (ii == index)
			break;
		ii++;
		head = head->next;
	}

	return (head);
}
