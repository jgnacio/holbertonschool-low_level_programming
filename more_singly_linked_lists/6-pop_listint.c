#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: The pointer to the list.
 *
 * Return: the num of the node delete.
 */
int pop_listint(listint_t **head)
{
	listint_t *next = NULL;
	int num_del = 0;

	if (head)
	{
		next = (*head)->next;
		num_del = (*head)->n;
		free(*head);
		*head = next;
		return (num_del);
	}
	return (0);
}
