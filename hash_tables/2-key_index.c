#include "hash_tables.h"

/**
 * key_index - Function that gives you the index of a key.
 * @key: Is the str to hash and give an index.
 * @size: The size of the hash table.
 *
 * Return: The index if success, -1 if fails.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!size)
		return (-1);
	return (hash_djb2(key) % size);
}
