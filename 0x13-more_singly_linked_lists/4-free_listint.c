#include "lists.h"

/**
 * free_listint - free list
 * @head: point to the first node
*/

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
