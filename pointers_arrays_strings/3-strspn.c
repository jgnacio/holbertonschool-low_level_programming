#include <stdio.h>
#include "main.h"

/**
 * _strspn - function that locates a character in a string.
 * @c: character to compare.
 * @s: pointer to select.
 *
 * Return: new pointer.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				num++;
			}
		}
	}
	return (num - 2);
}
