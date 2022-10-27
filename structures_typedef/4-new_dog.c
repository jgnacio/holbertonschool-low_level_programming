#include <stdio.h>
#include "dog.h"

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
	dog_t dog_new;
	dog_t *ptr;

	dog_new.name = name;
	dog_new.owner = owner;
	dog_new.age = age;
	ptr = &dog_new;

	return (ptr);
}
