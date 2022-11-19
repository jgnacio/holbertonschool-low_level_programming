#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - Function that delete a node
 * at a given position.
 * @head: It's the pointer to pointer of the first node of the list.
 * @index: The index to return.
 *
 * Return: The node based on index.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux = *head;
	listint_t *prev = NULL;

	if (head && *head)
	{
		while (index != 0 && aux)
		{
			prev = aux;
			aux = aux->next;
			index--;
		}
		if (!aux)
		{
			aux = NULL;
			return (-1);
		}

		if (prev)
			prev->next = aux->next;
		else
			*head = aux->next;
		free(aux);
		aux = NULL;
		return (1);
	}
	return (-1);
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
