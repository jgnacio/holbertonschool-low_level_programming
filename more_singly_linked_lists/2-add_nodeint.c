#include "lists.h"

/**
 *
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = makenode(n);
	if (!*head)
		*head = newnode;
	else
	{
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}

/**
 * makenode - Function that create a new node for an list
 * @str: The string to set in the new node.
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
