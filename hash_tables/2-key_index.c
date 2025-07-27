#include "hash_tables.h"
/**
 * key_index - gives the index for a key
 * @key: the key
 * @size: the size of hash table
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h = hash_djb2(key);

	return (h % size);
}
