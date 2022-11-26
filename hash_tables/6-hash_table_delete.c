#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: Hash table to delete.
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		free_list_hash(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}

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
