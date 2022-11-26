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
