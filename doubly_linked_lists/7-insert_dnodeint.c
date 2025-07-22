#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node to index
 * @h: head of list
 * @idx: index
 * @n: integer
 *
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *t = *h, *tmp;

	while (i < idx)
	{
		if (!t)
			return (NULL);
		i++;
		t = t->next;
	}
	if (!t)
		return (add_dnodeint_end(h, n));
	tmp = t->prev;
	if (!add_dnodeint(&t, n))
		return (NULL);
	t->prev = tmp;
	t->prev->next = t;
	return (t);
}
