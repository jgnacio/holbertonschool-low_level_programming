#include "lists.h"

/**
 * listint_len - Function that returns the number of elements
 * in a linked listint_t list.
 * @h: The linked list to count elements.
 *
 * Return: The elements of the list.
 */
size_t listint_len(const listint_t *h)
{
	int count_nodes = 0;

	if (h)
	{
		count_nodes += listint_len(h->next);
		count_nodes++;
	}
	return (count_nodes);
}
