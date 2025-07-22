#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of list
 * @index: index of target
 *
 * Return: 1 if successful -1 else
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);
	t = *head;
	while (i < index)
	{
		i++;
		t = t->next;
		if (!t)
			return (-1);
	}
	if (t->prev)
		t->prev->next = t->next;
	else
		*head = t->next;
	if (t->next)
		t->next->prev = t->prev;
	free(t);
	return (1);
}
