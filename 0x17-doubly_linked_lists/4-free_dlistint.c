#include "lists.h"

/**
 * free_dlistint - function free a dbly,
 * linked list
 * @head: pointr head of list.
 *
 * Return: No retu
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
