#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
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
	int i;
	int lenname;
	int lenowner;
	dog_t dog_new;
	dog_t *ptr = NULL;

	ptr = malloc(sizeof(dog_new));

	if (ptr == NULL)
		return (NULL);

	if (name == NULL)
		name = "";
	if (owner == NULL)
		name = "";

	lenname = _strlen(name);
	lenowner = _strlen(owner);

	ptr->name = malloc(lenname);
	if (ptr->name == NULL)
		return (NULL);
	ptr->owner = malloc(lenowner);
	if (ptr->owner == NULL)
		return (NULL);
	ptr->age = age;

	for (i = 0; name[i]; i++)
		ptr->name[i] = name[i];

	for (i = 0; owner[i]; i++)
		ptr->owner[i] = owner[i];

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

	for (len = 0; str[len]; len++)
		;
	return (len);
}
