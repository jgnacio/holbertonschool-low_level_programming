#include <stdio.h>
#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: array dest.
 * @src: array to copy the string to dest.
 * @n: the characters to add
 *
 * Return: The string copy.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[j] = src[j];
	}
	for ( ; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
