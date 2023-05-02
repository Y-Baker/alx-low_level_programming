#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _fun - reallocates memory for array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list
 * (always one more than the old list)
 * @new: new node to add to the list
 * Return: pointer to the new list
 */

listint_t **_fun(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newl;
	size_t i;

	newl = malloc(size * sizeof(listint_t *));
	if (newl == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newl[i] = list[i];
	newl[i] = new;
	free(list);
	return (newl);
}

/**
 * free_listint_safe - frees a listint_t
 * @head: double pointer to the start of the list
 * Return: the number of nodes
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i, count = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (count);

	while (*head != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (count);
			}
		}
		count++;
		list = _fun(list, count, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}

	free(list);
	return (count);
}
