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
	unsigned int num;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				num++;
			}
			accept++;
		}
		s++;
	}
	return (num);
}
