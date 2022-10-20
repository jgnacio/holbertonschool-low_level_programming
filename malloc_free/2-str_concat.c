#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string to concatenate.
 * @s2: second string to concatenate.
 *
 * Return: string concatenate.
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0;
	int len_s2 = 0;
	int i = 0, j = 0;
	char *two = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (; s1[len_s1]; len_s1++)
		;

	for (; s2[len_s2]; len_s2++)
		;

	two = malloc((len_s1 + len_s2) + 1);

	if (two)
	{
		for (i = 0; i <= (len_s1 + len_s2); i++)
		{
			if (i < len_s1)
				two[i] = s1[i];
			else
			{
				two[i] = s2[j];
				j++;
			}
		}
		return (two);
	}
	return (NULL);
}
