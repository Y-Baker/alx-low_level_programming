#include "lists.h"

/**
 * print_dlistint - print all the nodes
 * @h: the head of the list
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
