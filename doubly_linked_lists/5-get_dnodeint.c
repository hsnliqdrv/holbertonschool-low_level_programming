#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: head of list
 * @index: index of node
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && (index != 0))
	{
		head = head->next;
		index--;
	}
	return (head);
}
