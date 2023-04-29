#include "lists.h"

/**
 * free_listint2 - free the linked list
 * @head: pointer to pointer of the first node
 * return *head with null
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	free(*head);
	head = NULL;
}
