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

