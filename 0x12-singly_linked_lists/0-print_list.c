#include "lists.h"

/**
 * print_list - Prints all list.
 * @h: The list_t list.
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0, index = 0;
	char *str;
	while (h)
	{
		if (h->str == NULL)
		{
			str = "[0] (nil)\n";
			while (str)
			{
				_putchar(str[0]);
				str++;
			}
		}
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
			_putchar('\n');
		}
		count++;
		h = h->next;
	}

	return (count);
}