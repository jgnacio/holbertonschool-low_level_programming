#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of n value in all nodes.
 * @head: The linked list to go to the next element.
 *
 * Return: The sum of all n values.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		sum += head->n;
		sum += sum_dlistint(head->next);
	}
	return (sum);
}
