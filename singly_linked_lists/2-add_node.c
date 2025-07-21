#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds node at beginning
 * @head: head of list
 * @str: string
 *
 * Return: address of new
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = str ? strdup(str) : NULL;
	if (!(new->str) && str)
	{
		free(new);
		return (NULL);
	}
	new->len = 0;
	if (new->str)
	{
		while (new->str[new->len])
			new->len++;
	}
	new->next = *head;
	*head = new;
	return (new);
}
