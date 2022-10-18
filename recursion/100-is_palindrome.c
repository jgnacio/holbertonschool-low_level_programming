#include <stdio.h>

/**
 * is_palindrome - function that returns 1 if a string is a
 * palindrome and 0 if not.
 * @s: string.
 *
 * Return: 0 or 1.
 */
int is_palindrome(char *s)
{
	char *c = s;

	if (*s)
	{
			is_palindrome(s + 1);
			if (*s == *c)
			{
				return (1);
			}
	}
	return (0);
}
