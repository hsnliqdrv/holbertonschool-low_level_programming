#include "lists.h"
/**
 * sum_dlistint - sums integers of nodes
 * @head: head of list
 *
 * Return: sum of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
