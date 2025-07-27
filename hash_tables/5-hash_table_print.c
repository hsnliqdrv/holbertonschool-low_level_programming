#include "hash_tables.h"
/**
 * last_index - get last non-null element from array
 * @array: hash table array
 * @size: hash table array's size
 *
 * Return: index
 */
unsigned long int last_index(hash_node_t **array, unsigned long int size)
{
	unsigned long int i = size - 1;

	while (!array[i] && i > 0)
		i--;
	return (i);
}
/**
 * hash_table_print - prints a hashtable
 * @ht: hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
	if (ht)
	{
		unsigned long int i, last = last_index(ht->array, ht->size);

		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			hash_node_t *it = ht->array[i];

			while (it)
			{
				printf("'%s': '%s'", it->key, it->value);
				if (i < last || it->next)
					printf(", ");
				it = it->next;
			}
		}
		printf("}\n");
	}
}
