#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - Function that inserts a new node
 * at a given position.
 * @head: It's the first node of the list.
 * @idx: The index to return.
 * @n: The number to add a new node.
 *
 * Return: The node based on index.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux = *head;
	listint_t *newnode = NULL;
	listint_t *prev = NULL;

	newnode = makenode(n);
	if (head && *head)
	{
		while (idx != 0 && aux)
		{
			prev = aux;
			aux = aux->next;
			idx--;
		}
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
		if (prev)
			prev->next = newnode;
		else
			*head = newnode;

		return (newnode);
	}
	else
	{
		*head = newnode;
		return (*head);
	}
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
