#include "hash_tables.h"
/**
 * hash_table_get - get a value associated with a key
 * @ht: hash table
 * @key: the key
 *
 * Return: value if key exists, else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const unsigned char *ukey = (const unsigned char *) key;
	hash_node_t *node = !ht ? NULL :
		find(ht->array[key_index(ukey, ht->size)], key);

	return (node ? node->value : NULL);
}
