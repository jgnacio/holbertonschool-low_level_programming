#include "hash_tables.h"
#include "add_nodesh.c"

/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key to set.
 * @value: The value associated to key.
 *
 * Return: 1 if success, 0 if fail.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t **a_nodes = NULL;
	hash_node_t *check_node = NULL;
	unsigned long int c_index = 0;

	/* Check if the node is not empty string */
	if (strcmp(key, "") == 0)
		return (0);

	if (!ht)
		return (0);

	/* Get the array of nodes */
	a_nodes = ht->array;

	/* Get index with djb2 algorithm */
	c_index = key_index((unsigned const char *)key, ht->size);
	if (a_nodes[c_index])
	{
		/* If the key already exist update */
		if (strcmp(a_nodes[c_index]->key, key) == 0)
		{
			(a_nodes[c_index])->value = strdup(value);
			return (1);
		}
	}
	/* Put a node at the beginning or add new one */
	add_nodesh(&(a_nodes[c_index]), key, value);
	if (!check_node)
		return (0);
	return (1);
}
