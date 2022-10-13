#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string s of any of
 * the bytes in the string accept
 * @accept: string to compare.
 * @s: string to modify.
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;
	int init = 0;
	
	if (*needle == '\0')
	{
		return ('\0');
	}

	while(haystack[i] != '\0')
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] != needle[j])
			{
				break;
			}
			i++;
		}
		if (!haystack[i])
		{
			return (&haystack[i - j]);
		}
		i++;
	}
	return (0);
}
