#include "lists.h"
#include <stdlib.h>
/**
 * get_last - gets last node
 * @head: head node
 *
 * Return: last node
 */
dlistint_t *get_last(dlistint_t *head)
{
	if (head)
	{
		while (head->next)
			head = head->next;
	}
	return (head);
}
/**
 * add_dnodeint_end - add node to end of list
 * @head: head of list
 * @n: integer
 *
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->prev = get_last(*head);
	new->n = n;
	if (new->prev)
		new->prev->next = new;
	else
		*head = new;
	return (new);
}
