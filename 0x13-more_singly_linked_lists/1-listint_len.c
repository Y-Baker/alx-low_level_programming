#include "lists.h"

/**
 * listint_len - return number of nodes
 * @h: the header of the first node
 * Return: the number of the nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
