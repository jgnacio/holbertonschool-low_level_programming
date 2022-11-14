#include "lists.h"

/**
 * list_len - Function that returns the number of elements
 * in a linked list_t list.
 * @h: Is the start of the list.
 *
 * Return: The number of elemens of the lists.
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		if (h->next)
			h = h->next;
		else
			h = h->next;
	}
	return (i);
}
