#include "hash_tables.h"

/**
 * hash_table_get - get the value related to the key
 * @ht: the hash table
 * @key: the key to search
 * Return: the value if the key found ,Otherwise return Null
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int idx;

	if (!ht || ht->size == 0 || !ht->array || !key || strlen(key) == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
