#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node at the
 * beginning of a listint_t list.
 * @head: The pointer to the list.
 * @n: Int for the new node set.
 *
 * Return: The newnode.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

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
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
	}
	return (newnode);
}

/**
 * makenode - Function that create a new node for an list
 * @n: The integer to set in the new node.
 *
 * Return: The new node.
 */
dlistint_t *makenode(int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
