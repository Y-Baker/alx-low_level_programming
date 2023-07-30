#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of the hash table
 * Return: the hash table and Null if any error happen
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->size = size;

	new->array = malloc(size * sizeof(hash_node_t *));
	if (!new->array)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}
	return (new);
}
