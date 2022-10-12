#include <stdio.h>
#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @n: limiter to overwrite.
 * @b: value to remplace
 * @s: string to remplace.
 *
 * Return: string modified.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
