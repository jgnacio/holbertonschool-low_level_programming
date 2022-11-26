#include "hash_tables.h"

/**
 * hash_table_print - Function that print all index and subindex of a table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int com_trigger = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (com_trigger == 1)
				printf(", ");
			com_trigger = 1;
			printf("'%s': '%s'", (ht->array[i])->key, (ht->array[i])->value);
			while ((ht->array[i])->next)
			{
				printf("'%s': '%s'", (ht->array[i]->next)->key, (ht->array[i])->value);
				ht->array[i] = (ht->array[i])->next;
			}
		}
	}
	printf("}\n");
}
