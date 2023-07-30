#include "hash_tables.h"

/**
 * key_index - return the index of the key
 * @key: the key
 * @size: the size of the array
 * Return: the index of the key in the array
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
