#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of a listint_t list.
 * @h: The linked list for print.
 *
 * Return: The num of elements.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num_elem = 0;

	if (h)
	{
		printf("%d\n", h->n);
		num_elem++;
		num_elem += print_dlistint(h->next);
	}
	return (num_elem);
}
