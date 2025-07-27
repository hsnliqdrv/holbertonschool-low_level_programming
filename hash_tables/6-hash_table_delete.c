#include "hash_tables.h"
#include <stdlib.h>
/**
 * list_delete - deletes a list
 * @head: head of list
 */
void list_delete(hash_node_t *head)
{
	if (head)
	{
		list_delete(head->next);
		free(head->key);
		free(head->value);
		free(head);
	}
}
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	if (ht)
	{
		if (ht->array)
		{
			unsigned long int i;

			for (i = 0; i < ht->size; i++)
				list_delete(ht->array[i]);
			free(ht->array);
		}
		free(ht);
	}
}
