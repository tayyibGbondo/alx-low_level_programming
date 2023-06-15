#include "lists.h"

/**
 * delete_dnodeint_at_index - funct deletes  node at index of a,
 * linked list.
 * @head: pointr  pointr to the h of linked list.
 * @index: ndex of the node  be deleted. Index starts at 0.
 *
 * Return: if it succeeded, -1 if it fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head11;
	dlistint_t *head22;
	unsigned int cont;

	head11 = *head;

	if (head11 != NULL)
		while (head11->prev != NULL)
			head11 = head11->prev;
	cont = 0;

	while (head11 != NULL)
	{
		if (cont == index)
		{
			if (cont == 0)
			{
				*head = head11->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head22->next = head11->next;

				if (head11->next != NULL)
					head11->next->prev = head22;
			}
			free(head11);
			return (1);
		}
		head22 = head11;
		head11 = head11->next;
		cont++;
	}
	return (-1);
}
