#include <stdio.h>
#include "main.h"

/**
 * _strcat - function appends the src string to the dest string, overwriting
 * the terminating null byte (\0) at the end of dest, and then adds a
 * terminating null byte.
 * @dest: array dest.
 * @src: array to copy the string to dest.
 *
 * Return: The string copy.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
