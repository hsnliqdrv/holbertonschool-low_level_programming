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
	unsigned long int i, j;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		hash_node_t *node = malloc(sizeof(hash_node_t));

		if (!node)
		{
			for (j = 0; j < i; j++)
				free(table->array[j]);
			free(table->array);
			free(table);
			return (NULL);
		}
		table->array[i] = node;
	}
	return (table);
}
