#include "hash_tables.h"

/**
 * free_list_hash - Fuction that free a singly linked list.
 * @node: Pointer to the first node.
 */
void free_list_hash(hash_node_t *node)
{
	if (node)
	{
		free_list_hash(node->next);
		free(node->key);
		free(node->value);
		free(node);
	}
}
