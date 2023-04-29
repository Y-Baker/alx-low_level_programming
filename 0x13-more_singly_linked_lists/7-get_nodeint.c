#include "lists.h"

/**
 * get_nodeint_at_index - return the index node
 * @head: pointer to the first node[0]
 * @index: the index
 * Return: a pointer to the index node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
