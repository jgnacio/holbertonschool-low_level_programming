#include "lists.h"
#include <stdio.h>
/**
 * delete_dnodeint_at_index - Function that delete a node
 * at a given position.
 * @head: It's the pointer to pointer of the first node of the list.
 * @index: The index to return.
 *
 * Return: The node based on index.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;
	dlistint_t *prev = NULL;

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
