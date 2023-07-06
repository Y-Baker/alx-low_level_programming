#include "lists.h"

/**
 * dlistint_len - cal the number of nodes
 * @h: the head of the list
 * Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
