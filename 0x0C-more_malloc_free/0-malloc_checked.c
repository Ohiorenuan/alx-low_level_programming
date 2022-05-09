#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of the memory created
 * Return: A pointer to the new memory created
 */
void *malloc_checked(unsigned int b)
{ void *c;

	c = malloc(b);
	if (c == NULL)
	{ free(c);
		exit(98); }
	return (c);
}
