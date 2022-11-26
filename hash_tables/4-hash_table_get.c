#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: The hast table to find the value wit key.
 * @key: The key to find the value.
 *
 * Return: The value get, NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;

	if (!ht)
		return (NULL);


	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (strcmp((ht->array[i])->key, key) == 0)
				return ((ht->array[i])->value);
			while ((ht->array[i])->next)
			{
				if (strcmp((ht->array[i])->key, key) == 0)
					return ((ht->array[i])->value);
				ht->array[i] = (ht->array[i])->next;
			}
		}
	}

	return (NULL);
}
