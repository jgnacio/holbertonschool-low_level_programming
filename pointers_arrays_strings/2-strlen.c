#include "main.h"
#include <stdio.h>
/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to check
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s = s + 1;
	}
	return (len);
}
