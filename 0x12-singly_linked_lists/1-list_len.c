#include "lists.h"

/**
 * list_len - return the length of list
 * @h: the list
 * Return: the len of the h
*/

size_t list_len(const list_t *h)
{
    size_t count = 0;
    while (h)
    {
        count++;
        h = h->next;
    }
    return (count);
}