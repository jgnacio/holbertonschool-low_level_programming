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

	ptr->name = strdup(name);
	if (ptr->name == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	ptr->owner = strdup(owner);
	if (ptr->owner == NULL)
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
