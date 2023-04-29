#include "lists.h"

/**
 * print_listint - print linked list
 * @h: the header of the linked list
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (NULL);
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
