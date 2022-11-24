#include "lists.h"
#include "5-get_dnodeint.c"

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
		return (NULL);
	if (!aux)
	{
		aux = newnode;
		return (aux);
	}
	aux = get_dnodeint_at_index(aux, idx);
	newnode->next = aux;
	if (aux)
	{
		prev = aux->prev;
		aux->prev = newnode;
	}
	if (prev)
	{
		prev->next = newnode;
		newnode->prev = prev;
	}
	return (newnode);
}
