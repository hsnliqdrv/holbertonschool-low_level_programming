#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints a doubly linked list
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
