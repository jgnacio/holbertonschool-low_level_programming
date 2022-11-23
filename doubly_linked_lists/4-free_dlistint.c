#include "lists.h"

/**
 * free_dlistint - Function that frees a listint_t list.
 * @head: is the listint_t to free.
 *
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
