#include "lists.h"

/**
 * add_dnodeint_end - funct  adds node at the end of list.
 * @head: poiner to pointr to head of list
 * @n: data to  add.
 *
 * Return: address the new elements or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_nod, *lastt;

	new_nod = malloc(sizeof(dlistint_t));

	if (new_nod == NULL)
		return (NULL);

	new_nod->n = n;

	new_nod->next = NULL;

	lastt = *head;

	if (*head == NULL)
	{
		new_nod->next = *head;
		*head = new_nod;
	}
	else
	{
		while (lastt->next)
			lastt = lastt->next;
		lastt->next = new_nod;
	}
	new_nod->prev = lastt;

	return (new_nod);
}
