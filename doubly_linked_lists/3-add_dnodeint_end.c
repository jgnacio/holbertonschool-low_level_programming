#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - Function that adds a new node at the
 * beginning of a listint_t list.
 * @head: The pointer to the list.
 * @n: Int for the new node set.
 *
 * Return: The newnode.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;
	dlistint_t *aux = *head;

	newnode = makenode(n);
	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}
	if (!*head)
		*head = newnode;
	else
	{
		while (aux->next)
		{
			aux = aux->next;
		}
		aux->next = newnode;
		newnode->prev = aux;
	}
	return (newnode);
}
