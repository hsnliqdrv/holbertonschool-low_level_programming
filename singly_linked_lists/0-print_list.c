#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints a singly linked list
 * @h: list head
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;
	const list_t *i = h;

	while (i)
	{
		unsigned int l = i->str ? i->len : 0;

		printf("[%u] %s\n", l, i->str ? i->str : "(nil)");
		i = i->next;
		c++;
	}
	return (c);
}
