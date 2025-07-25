#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: head of list
 */
void free_list(list_t *head)
{
	if (!head)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
