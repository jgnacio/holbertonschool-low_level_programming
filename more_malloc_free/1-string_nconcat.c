#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: String 1 to concat.
 * @s2: String 2 to concat.
 * @n: How long of s2 to copy.
 *
 * Return: String concatenates.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *stct = NULL;
	unsigned int i = 0, lens1, lens2;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lens1 = strlen(s1);
	lens2 = strlen(s2);

	if (n > lens2)
		n = lens2;

	stct = malloc(lens1 + n + 1);

	if (stct == NULL)
		return (NULL);

	for (i = 0; i < (lens1 + n); i++)
	{
		if (i < lens1)
			stct[i] = s1[i];
		else
		{
			stct[i] = s2[j];
			j++;
		}
	}
	stct[i] = '\0';
	return (stct);
}
