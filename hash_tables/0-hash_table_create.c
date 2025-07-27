#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of array
 *
 * Return: pointer to table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
