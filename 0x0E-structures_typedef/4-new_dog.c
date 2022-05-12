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
{ dog_t doggo, *dog1;

	doggo.name = name;
	doggo.age = age;
	doggo.owner = owner;
	dog1 = malloc(sizeof(dog_t *));
	if (dog1 == NULL)
	{ free(dog1);
		return (NULL);
		exit(0); }
	else if (dog1 != NULL)
		dog1 = &doggo;
	return (dog1); }
