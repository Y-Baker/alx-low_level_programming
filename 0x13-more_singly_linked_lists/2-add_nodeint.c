#include "lists.h"

/**
 * add_nodeint - add node to the start
 * @head: point to the point that point at the head of the list
 * @n: the number for the new node
 * Return: the new pointer
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
