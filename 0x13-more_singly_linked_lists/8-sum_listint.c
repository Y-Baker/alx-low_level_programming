#include "lists.h"

/**
 * sum_listint - cal the sum of all data in the linked list
 * @head: pointer to the first element int the linked list
 * Return: the sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
