#include "lists.h"
/**
 * get_dnodeint_at_index - Function that returns the nth
 * node of a listint_t linked list.
 * @head: It's the first node of the list.
 * @index: The index to return.
 *
 * Return: The node based on index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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
