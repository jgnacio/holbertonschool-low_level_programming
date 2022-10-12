#include <stdio.h>
#include "main.h"

/**
 * cap_string -  function that capitalizes all words of a string.
 * @str: string to set capitalize
 *
 * Return: String upper.
 */
char *cap_string(char *str)
{
	int i, j;
	int separators[] = {32, 9, 10, 44, 46, 59, 49, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] -= 32;
		}
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (separators[j] == str[i] && str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
