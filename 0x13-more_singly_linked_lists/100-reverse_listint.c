#include "lists.h"

/**
 * reverse_listint - reverse linkes listed
 * @head: point to pointer of first
 * Return: linked listed;
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	if (!(*head))
		return (NULL);
	prev = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *(head);
		*head = next;
	}
	*head = prev;
	return (*head);
}
