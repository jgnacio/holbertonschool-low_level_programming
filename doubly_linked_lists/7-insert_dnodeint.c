#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts a new node
 * at a given position.
 * @h: It's the first node of the list.
 * @idx: The index to return.
 * @n: The number to add a new node.
 *
 * Return: The node based on index.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = *h;
	dlistint_t *newnode = NULL;
	dlistint_t *prev = NULL;

	newnode = makenode(n);
	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}
	if (h && *h)
	{
		for (; idx != 0 && aux; idx--, prev = aux, aux = aux->next)
			;
		if (!aux)
		{
			if (prev->next == NULL && idx == 0)
			{
				prev->next = newnode;
				return (newnode);
			}
			return (NULL);
		}
		newnode->next = aux;
		aux->prev = newnode;
		if (prev)
		{
			prev->next = newnode;
			newnode->prev = prev;
		}
		else
			*h = newnode;
		return (*h);
	}
	else
	{
		*h = newnode;
		return (*h);
	}
}
