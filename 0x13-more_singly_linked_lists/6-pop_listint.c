#include "lists.h"

/**
 * pop_listint - delete first node in the linked list
 * @head: point to pointer of first node
 * Return: the data for the deleted node
*/

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (!head || (*head) == NULL)
		return (0);
	if ((*head)->next == NULL)
		tmp = NULL;
	else
		tmp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = tmp;
	return (n);
}
