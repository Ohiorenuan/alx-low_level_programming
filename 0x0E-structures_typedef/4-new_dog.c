#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Initializes elements of typedef dog_t
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of owner of dog
 * Return: A pointer to the new_dog or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	new_name = name;
	new_owner = owner;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog)
	{
		new_dog->name = new_name;
		new_dog->age = age;
		new_dog->owner = new_owner; }
	if (new_name == NULL || new_owner == NULL)
	{ return(NULL);
		exit(0); }
	return (new_dog); }
