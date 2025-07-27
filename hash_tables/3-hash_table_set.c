#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * find - check if key exists in hash node list
 * @hnl: head of hash node list
 * @key: the key
 *
 * Return: if not existing NULL, else pointer to node
 */
hash_node_t *find(hash_node_t *hnl, const char *key)
{
	if (!hnl)
		return (NULL);
	if (strcmp(hnl->key, key) == 0)
		return (hnl);
	return (find(hnl->next, key));
}
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
	char *dk, *dv;

	if (strlen(key) == 0 || !key || !value || !ht || !ht->array)
		return (0);
	ind = key_index((const unsigned char *) key, ht->size);
	it = find(ht->array[ind], key);
	dv = strdup(value);
	if (!dv)
		return (0);
	if (it)
	{
		free(it->value);
		it->value = dv;
		return (1);
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	dk = strdup(key);
	if (!dk)
	{
		free(dv);
		free(node);
		return (0);
	}
	node->key = dk;
	node->value = dv;
	node->next = ht->array[ind];
	ht->array[ind] = node;
	return (1);
}
