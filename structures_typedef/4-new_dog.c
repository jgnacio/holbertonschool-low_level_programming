#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

int _strlen(char *str);
char *_strdup(char *str);
/**
 * new_dog - function that creates a new dog.
 * @name: name of new dog.
 * @age: age of new dog.
 * @owner: owner of new dog.
 *
 * Return: pointer pointing to a copy of new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = NULL;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	ptr->name = _strdup(name);
	if (!ptr->name)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	ptr->owner = _strdup(owner);
	if (!ptr->owner)
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}

	ptr->age = age;

	return (ptr);
}

/**
 * _strlen - function to count the characters of an string.
 * @str: string to check.
 *
 * Return: count.
 */
int _strlen(char *str)
{
	int len;

	if (!str)
		return (0);
	for (len = 0; str[len]; len++)
		;
	return (len);
}

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
