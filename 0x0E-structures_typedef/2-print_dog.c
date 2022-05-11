#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Prints a struct dog
 *@d: A pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: %s\n", "(nil)");
	if (d->age)
		printf("Age: %.6f\n", d->age);
	else
		printf("Age: %s\n", "(nil)");
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Name: %s\n", "(nil)");
}
