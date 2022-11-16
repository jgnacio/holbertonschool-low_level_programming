#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Function that prints all the elements of a listint_t list.
 * @h: The linked list for print.
 *
 * Return: The num of elements.
 */
size_t print_listint(const listint_t *h)
{
	int num_elem = 0;

	if (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		num_elem++;
		num_elem += print_listint(h->next);
	}
	return (num_elem);
}
