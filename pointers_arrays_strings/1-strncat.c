#include <stdio.h>
#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: array dest.
 * @src: array to copy the string to dest.
 * @n: the characters to add
 *
 * Return: The string copy.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
