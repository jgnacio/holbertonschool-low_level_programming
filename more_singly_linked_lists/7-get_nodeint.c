#include "lists.h"
/**
 * get_nodeint_at_index - Function that returns the nth
 * node of a listint_t linked list.
 * @head: It's the first node of the list.
 * @index: The index to return.
 *
 * Return: The node based on index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head)
	{
		while (index != 0 && head)
		{
			head = head->next;
			index--;
		}
		return (head);
	}
	return (NULL);
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
