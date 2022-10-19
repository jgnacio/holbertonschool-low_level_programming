#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string to copy.
 *
 * Return: the pointer of array.
 */
char *_strdup(char *str)
{
	int i = 0;
	int len = 0;
	char *str_copy = NULL;

	if (str != NULL)
	{
		for (len = 0; str[len]; len++)
		{
		}

		/*For the extra null character*/

		str_copy = malloc(sizeof(char) * len + 1);

		if (str_copy == NULL)
			return (NULL);

		for (i = 0; i < len; i++)
		{
			str_copy[i] = str[i];
		}
		return (str_copy);
	}
	else
		return (str_copy);
}
