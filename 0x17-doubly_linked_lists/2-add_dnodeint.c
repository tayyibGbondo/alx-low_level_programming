#include "lists.h"

/**
 * add_dnodeint - function add new node at  begininning of  dbly,
 * linked listss
 * @head: pointr to pointes  to head of the list.
 * @n: data to be added
 *
 * Return: the address new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nod;

	new_nod = malloc(sizeof(dlistint_t));

	if (new_nod == NULL)
		return (NULL);
	new_nod->n = n;
	new_nod->next = *head;
	new_nod->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_nod;
	(*head) = new_nod;

	return (new_nod);
}
