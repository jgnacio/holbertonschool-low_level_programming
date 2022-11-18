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
		while (index != 0)
		{
			head = head->next;
			index--;
		}
		return (head);
	}
	return (NULL);
}
