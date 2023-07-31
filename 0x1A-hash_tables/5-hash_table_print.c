#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: the hash table to print
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int idx, n = 0;

	if (!ht || !ht->array || ht->size == 0)
		return;

	putchar('{');
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx])
		{
			tmp = ht->array[idx];
			while (tmp)
			{
				if (n != 0)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				n++;
				tmp = tmp->next;
			}
		}
	}
	 printf("}\n");
}
