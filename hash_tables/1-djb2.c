#include "hash_tables.h"
/**
 * hash_djb2 - Function that get a hash with a string.
 * @str: Is the string to hash.
 *
 * Return: The hash in djb2 algorithm.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
