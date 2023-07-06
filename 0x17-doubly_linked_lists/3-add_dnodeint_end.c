#include "lists.h"

/**
 * add_dnodeint_end - add node to the end
 * @head: the pointer to the head of the list
 * @n: the value of the new node
 * Return: pointer to the new element
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while ((*head)->next)
		*head = (*head)->next;
	(*head)->next = new;
	new->prev = *head;
	return (new);
}
