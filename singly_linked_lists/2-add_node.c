#include "lists.h"


list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = makenode(str);
	if (!*head)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}

list_t *makenode(const char *str)
{
		list_t *new = NULL;
		int i = 0;
		char *dup;

		new = malloc(sizeof(list_t));
		if (!new)
		{
			free(new);
			return (new);
		}

		for (i = 0; str[i]; i++)
			;
		dup = strdup(str);
		if (!dup)
			free(new);
		else
		{
			new->str = dup;
			new->len = i;
			new->next = NULL;
		}
		return (new);
}
