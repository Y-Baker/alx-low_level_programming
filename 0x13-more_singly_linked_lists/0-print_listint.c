#include "lists.h"

/**
 * print_listint - print linked list
 * @h: the header of the linked list
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		_putchar('0' + h->n);
		_putchar('\n');
		count++;
		h = h->next;
	}
	return (count);
}
