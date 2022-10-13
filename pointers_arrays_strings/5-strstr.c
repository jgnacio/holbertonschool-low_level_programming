#include <stdio.h>
#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @needle: string to compare.
 * @haystack: pointer to send.
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	if (needle[0] == '\0')
	{
		return (&haystack[0]);
	}

	while (haystack[i] != '\0')
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] != needle[j])
			{
				printf("%d\n", j);
				break;
			}
			i++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i - j]);
		}
		i++;
	}
	return (0);
}
