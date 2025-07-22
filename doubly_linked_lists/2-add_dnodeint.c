#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - add node to beginning of list
 * @head: pointer to head of list
 * @n: integer
 *
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	if (new->next)
		new->next->prev = new;
	return (new);
}
