#include <stdio.h>
#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: string to encode.
 *
 * Return: String encoded.
 */
char *leet(char *str)
{
	int i, j;
	char leet[10] = {'a', 'e', 'o', 't', 'l', '4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == leet[j] || str[i] == leet[j] - 32)
			{
				printf("j:%d ", j);
				str[i] = leet[j + 5];
			}
		}
	}
	return (str);
}
