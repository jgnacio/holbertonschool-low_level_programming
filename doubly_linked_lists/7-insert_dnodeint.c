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
	dlistint_t *new = NULL;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	aux = get_dnodeint_at_index(*h, idx - 1);
	if (!aux)
		return (NULL);

	new = add_dnodeint(&(aux->next), n);
	new->prev = aux;
	aux->next = new;
	return (new);
}
