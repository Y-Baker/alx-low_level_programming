#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at definte position
 * @head: point to point of the first node
 * @idx: the index;
 * @n: the data for the new node
 * Return: pointer to the linked list
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *next;
	listint_t *prev;
	unsigned int i;

	if (!head || idx < 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	next = *head;

	for (i = 0; i < idx && next; i++)
	{
		prev = next;
		next = next->next;
	}

	if (i == idx)
	{
		new->n = n;
		new->next = next;
		if (i != 0)
			prev->next = new;
		else
			*head = new;
	}
	else
	{
		return (NULL);
	}
	return (new);
}