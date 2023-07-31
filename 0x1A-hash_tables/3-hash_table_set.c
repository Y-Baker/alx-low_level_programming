#include "hash_tables.h"

/**
 * hash_table_set - set a value in a hash_table
 * @ht: the hash table
 * @key: the key to search
 * @value: the value to put
 * Return: 1 if success otherwise 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *tmp;
	unsigned long int idx;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	/*Check if this key is exit or not*/
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	/*Creat New Node [NOT EXIT]*/
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
