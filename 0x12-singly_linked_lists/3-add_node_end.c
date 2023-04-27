#include "lists.h"
#include "string.h"
/**
 * add_node_end - add node to the end of the list
 * @head: the pointer to the head of the list
 * @str: the string
*/

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new, *last;
    size_t len = 0;
    char *strcp;
    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);
    strcp = strdup(str);
    if (strcp)
    {
        free (new);
        return (NULL);
    }
    while (strcp[len])
        len++;
    new->len = len;
    new->str = strcp;
    new->next = NULL;
    last = *head;
    if (*(head) = NULL)
    {
        *head = new;
    }
    else
    {
        while (last != NULL)
        {
            last = last->next;
        }
        last->next = new;
    }
    return (*head);
}