#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 */
char *_strdup(char *str)
{
	int i = 0;
	int len = 0;
	char *str_copy = NULL;

	if (*str != '\0')
	{
		for (len = 0; str[len]; len++);

		/*For the extra null character*/

		str_copy = malloc(sizeof(char) * len + 1);

		if (str_copy == NULL)
			return (NULL);

		for (i = 0; i <= len; i++)
		{
			str_copy[i] = str[i];
		}
		str_copy[i + 1] = 'k';
		printf("\ns\n%s\ne\n", str_copy);
	}
	return (str);
}
