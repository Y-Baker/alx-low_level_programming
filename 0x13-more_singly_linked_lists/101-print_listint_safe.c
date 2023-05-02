#include "lists.h"

/**
  * print_listint_safe - prints linked list
  * @head: head
  * Return: number of nodes
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0, i = 0;
	const listint_t *bug;
	const listint_t *h;

	h = head;
	bug = head;
	while (head)
	{
		printf("[%p] %d\n", head, head->n);
		if (head == head->next)
		{
			printf("-> [%p] %d\n", head, head->n);
			count++;
			break;
		}
		head = head->next;
		
		while (i < count && bug)
		{
			if (head == bug)
			{
				printf("-> [%p] %d\n", head, head->n);
				if (head != head->next)
					count++;
				return (count);
			}
			bug = bug->next;
			i++;
		}
		bug = h;
		i = 0;
		count++;
	}
	return (count);
}
