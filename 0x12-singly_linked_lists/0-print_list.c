#include "lists.h"

/**
 * print_list - print a linked listed
 * @h: the node
 * Return: number of node
*/

size_t print_list(const list_t *h)
{
    size_t count = 0, index = 0;
    while (h)
    {
        if (h->str)
            printf("[0] (nil)");
        else
        {
            _putchar('[');
            putchar(h->len + '0');
            _putchar(']');
            _putchar(' ');
            while(index < h->len)
            {
                _putchar(h->str[index]);
                index++;
            }
        }
        _putchar('\n');
        count++;
        h = h->next;
    }
    return (count);
}