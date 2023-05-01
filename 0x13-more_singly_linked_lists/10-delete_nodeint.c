#include "lists.h"

/**
 * delete_nodeint_at_index - delete specific node
 * @head: pointer to pointer of the first element
 * @index: the index
 * Return: 1 if succeeded and -1 if failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int re = FAILED, count = 0;
	listint_t *last, *next;

	if (!(*head))
		return (FAILED);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		(*head) = next;
		return (SUCCEED);
	}
	last = *head;
	while (last)
	{
		if (index == count + 1)
		{
			next = last->next->next;
			free(last->next);
			last->next = next;
			return (SUCCEED);
		}
		last = last->next;
		count++;
	}
	return (re);
}
