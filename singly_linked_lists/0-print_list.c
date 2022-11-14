#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: the pointer to a new list_t from main.
 *
 * Return: the length of elements of list.
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	for (i = 0; h; i++)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	}

	return (i);
}
