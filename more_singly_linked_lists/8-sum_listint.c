#include "lists.h"

/**
 * sum_listint - Function that returns the sum of n value in all nodes.
 * @head: The linked list to go to the next element.
 *
 * Return: The sum of all n values.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		sum += head->n;
		sum += sum_listint(head->next);
	}
	return (sum);
}
