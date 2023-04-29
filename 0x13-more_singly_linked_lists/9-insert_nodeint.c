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
	unsigned int count = 0;
	listint_t *new, *tmp, *last;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	last = *head;
	if (idx == 0)
	{
		tmp = last;
		*head = new;
		new->next = tmp;
		return (*head);
	}
	else
	{
		while (last)
		{
			tmp = last->next;
			if (count == idx - 1)
			{
				last->next = new;
				new->next = tmp;
				return (*head);
			}
			last = tmp;
			count++;
		}
		return (NULL);
	}
}
