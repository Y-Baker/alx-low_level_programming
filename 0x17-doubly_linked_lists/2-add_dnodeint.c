#include "lists.h"

/**
 * add_dnodeint - add node to the begin
 * @head: the pointer to the head of the list
 * @n: the value of the node to add
 * Return: Null if failed otherwise return the new head
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	h = *head;

	new->n = n;
	new->prev = NULL;
	new->next = h;

	if (h)
		h->prev = new;
	*head = new;
	return (*head);
}
