#ifndef __DOG__
#define __DOG__

/**
 * struct dog - Contains info about dogs
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - Initializes elements of type struct dog
 * @d: Pointer to the struct dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints a struct dog
 *@d: A pointer to struct dog
 */
void print_dog(struct dog *d);

typedef struct dog dog_t;

/**
 * new_dog - Initializes elements of typedef dog_t
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of owner of dog
 * Return: A pointer to the new_dog or NULL if it fail
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Free dog_t
 * @d: The dog_t to be freed
 */
void free_dog(dog_t *d);

#endif
