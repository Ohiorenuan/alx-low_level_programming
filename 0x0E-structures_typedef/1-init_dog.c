#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{ d->name = name;
		d->age = age;
		d->owner = owner; }
}
