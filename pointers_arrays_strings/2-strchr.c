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
	while (*s && *s != c)
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
