#include "lists.h"
#include <string.h>

/**
 * add_node - add node to the list
 * @head: A pointer to the head of the list_t list
 * 
*/

list_t *add_node(list_t **head, const char *str)
{
    size_t len = 0;
    list_t *new;
    char *strcp;

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);
    strcp = strdup(str);
    if (strcp == NULL)
    {
        free(new);
        return (NULL);
    }
    while (strcp[len])
        len++;
    new->len = len;
    new->str = strcp;
    new->next = *head;

    *head = new;
    return (new);
}