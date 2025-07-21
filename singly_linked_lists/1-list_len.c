#include "lists.h"
#include <stddef.h>
/**
 * list_len - length of a linked list
 * @h: head of list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
