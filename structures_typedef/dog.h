#ifndef DOG_H
#define DOG_H
/**
 * struct dog - New type for my dogs
 * @name: Name of dogs.
 * @age: The age.
 * @owner: owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
