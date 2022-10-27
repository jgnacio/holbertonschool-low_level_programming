#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: a pointer pointing to my_dog on main.c
 * @name: the name of dog.
 * @age: the age of dog.
 * @owner: the owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
