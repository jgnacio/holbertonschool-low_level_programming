#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

list_t *makenode(const char *str);

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	if (!*head)
	{
		new = makenode(str);
		*head = new;
	}
	else
	{
		new = makenode(str);
		new->next = *head;
		*head = new;
	}
	return (*head);
}

list_t *makenode(const char *str)
{
		list_t *new = NULL;
		int i = 0;

		new = malloc(sizeof(list_t));

		new->str = strdup(str);
		for (i = 0; str[i]; i++)
			;

		new->len = i;
		new->next = NULL;
		return (new);
}
