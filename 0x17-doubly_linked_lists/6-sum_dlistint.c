#include "lists.h"

/**
 * sum_dlistint - funct return  sum of all the,
 * data (n) of a linked list.
 * @head: pointr  pointr to head of linked list.
 *
 * If the list is empty, return 0.
 *
 * Return: The summing.
 */

int sum_dlistint(dlistint_t *head)
{
	int summ = 0;

	while (head != NULL)
	{
		summ += head->n;
		head = head->next;
	}
	return (summ);
}
