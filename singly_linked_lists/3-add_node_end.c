#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a node to end
 * @head: head of list
 * @str: string to be stored
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *i;

	if (!head)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	if (!str)
	{
		new->str = NULL;
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		if (!(new->str))
		{
			free(new);
			return (NULL);
		}
		new->len = 0;
		while (new->str[new->len])
			new->len++;
	}
	i = *head;
	if (i == NULL)
		*head = new;
	else
	{
		while (i->next)
			i = i->next;
		i->next = new;
	}
	return (new);
}
