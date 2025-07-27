#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_set - add an element to hash table
 * @ht: hash table
 * @key: key for element
 * @value: value for element
 *
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *it;
	unsigned long int ind;

	if (strlen(key) == 0 || !key || !value || !ht || !ht->array)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if (!node->value || !node->key)
		return (0);
	ind = key_index((const unsigned char *) key, ht->size);
	it = ht->array[ind];
	if (!it)
	{
		ht->array[ind] = node;
		return (1);
	}
	while (it->next)
		it = it->next;
	it->next = node;
	return (1);
}
