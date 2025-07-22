#include "lists.h"
/**
 * dlistint_len - get length of doubly linked list
 * @h: head of list
 *
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
