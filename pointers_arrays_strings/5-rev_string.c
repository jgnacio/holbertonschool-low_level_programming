#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string.
 * @s: pointer char[] to check
 *
 * Return: nothing.
 */
int _strlen(char *s);

void rev_string(char *s)
{
	int len = _strlen(s) - 1;
	int i;
	char prev_value;
	int half = len / 2;

	for (i = 0; i < half; i++)
	{
		prev_value = s[i];
		s[i] = s[len];
		s[len] = prev_value;
		len--;
	}
}

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
