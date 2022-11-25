#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: The size of the hash table;
 *
 * Return: A pointer to the hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;

	new_hash_table = malloc(size);
	if (!new_hash_table)
		return (NULL);
	return (new_hash_table);
}
