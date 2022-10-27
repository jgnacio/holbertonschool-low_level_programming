#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog.
 * @d: pointer pointing to an struct.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->name != NULL)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: (nil)\n");
		if (d->name != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
