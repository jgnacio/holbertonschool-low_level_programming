#include "lists.h"

/**
 * free_listint2 - Function that set head to NULL
 * @head: The pointer to the list.
 */
void free_listint2(listint_t **head)
{
	if (head)
	{
		free_listint(*head);
		*head = NULL;
	}
}

/**
 * free_listint - Function that frees a listint_t list.
 * @head: is the listint_t to free.
 *
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
