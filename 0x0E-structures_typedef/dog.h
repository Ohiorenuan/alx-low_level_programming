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
 * init_dog - Initializes a variable of type struct dog
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
#endif
