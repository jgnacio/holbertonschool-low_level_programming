#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @c: character to compare.
 * @s: pointer to select.
 *
 * Return: new pointer.
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
		else
		{
			s++;
		}
	} while (*s);
	return ('\0');
}
