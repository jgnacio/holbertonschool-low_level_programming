#include "lists.h"
#include "5-get_dnodeint.c"
int pop_dlistint(dlistint_t **head);
/**
 * delete_dnodeint_at_index - Function that delete a node at index
 * @head: Pointer to the doble list
 * @index: The node that's deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	dlistint_t *prev = NULL;

	if (!head)
		return (-1);
	if (index == 0)
		return (pop_dlistint(head));
	node = get_dnodeint_at_index(*head, index);
	if (!node)
		return (-1);
	prev = get_dnodeint_at_index(*head, index - 1);
	if (!prev)
		return (-1);
	prev->next = node->next;
	if (node->next)
		node->next->prev = prev;
	free(node);
	return (1);
}

/**
 * pop_dlistint - Deletes a node
 * @head: Pointer to the first node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int pop_dlistint(dlistint_t **head)
{
	dlistint_t *node = 0;

	if (!head || !(*head))
		return (-1);
	node = *head;
	*head = (*head)->next;
	if (*head)
		(*head)->prev = NULL;
	free(node);
	return (1);
}
