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
		return (NULL);
	if (!aux)
	{
		aux = newnode;
		return (aux);
	}
	for (; idx && aux; idx--)
	{
		prev = aux->prev;
		aux = aux->next;
	}
	newnode->next = aux;
	aux->prev = newnode;
	if (idx == 0 && prev->next == NULL)
		return (aux);
	prev->next = newnode;
	newnode->prev = prev;
	return (newnode);
}
