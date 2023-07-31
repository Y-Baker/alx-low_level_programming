#include "hash_tables.h"

/**
 * hash_table_delete - delete the hash table
 * @ht: the hash table to delete
 * Return: NoThing
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head;
	hash_node_t *tmp;
	unsigned long int idx;

	if (!ht || !ht->array || ht->size == 0)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		head = ht->array[idx];
		while (head)
		{
			tmp = head;
			head = head->next;
			free_node(tmp);
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}


/**
 * free_node - free node for the hash table
 * @node: the node of the hash table
*/
void free_node(hash_node_t *node)
{
	if (node)
	{
		free(node->key);
		free(node->value);
		free(node);
	}
}
