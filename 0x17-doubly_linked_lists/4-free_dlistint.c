#include "lists.h"

/**
 * free_dlistint - free the linked list
 * @head: the head of the list
*/

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return (NULL);
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
