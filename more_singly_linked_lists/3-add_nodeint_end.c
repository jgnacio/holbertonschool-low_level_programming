#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - Function that adds a new node at the
 * beginning of a listint_t list.
 * @head: The pointer to the list.
 * @n: Int for the new node set.
 *
 * Return: The newnode.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = NULL;
	listint_t *aux = *head;

	newnode = makenode(n);
	if (!*head)
		*head = newnode;
	else
	{
		while (aux->next)
		{
			aux = aux->next;
		}
		aux->next = newnode;
	}
	return (newnode);
}

/**
 * makenode - Function that create a new node for an list
 * @n: The integer to set in the new node.
 *
 * Return: The new node.
 */
listint_t *makenode(int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (new);
	}

	new->n = n;
	new->next = NULL;
	return (new);
}
