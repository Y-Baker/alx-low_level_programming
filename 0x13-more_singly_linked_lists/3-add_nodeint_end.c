#include "lists.h"

/**
 * add_nodeint_end - add node to the end
 * @head: pointer to a pointer for the first node
 * @n: the number for the new node
 * Return: the new pointer for the first node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
