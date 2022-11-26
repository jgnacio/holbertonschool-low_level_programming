#include "hash_tables.h"

/**
 * add_nodesh - Function that adds a new node at the
 * beginning of a listint_t list.
 * @head: The pointer to the list.
 * @n: Int for the new node set.
 *
 * Return: The newnode.
 */
hash_node_t *add_nodesh(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *newnode;

	newnode = makenode(key, value);
	if (!*head)
	{
		*head = newnode;
	}
	else
	{
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}

/**
 * makenode - Function that create a new node for an list
 * @n: The integer to set in the new node.
 *
 * Return: The new node.
 */
hash_node_t *makenode(const char *key, const char *value)
{
	hash_node_t *new = NULL;
	char *cpy_str = NULL;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (new);

	cpy_str = strdup(key);
	if (!cpy_str)
	{
		free(new);
		return (NULL);
	}
	new->key = cpy_str;
	cpy_str = strdup(value);
	if (!cpy_str)
	{
		free(cpy_str);
		return (NULL);
	}
	new->value = cpy_str;
	new->next = NULL;
	return (new);
}
