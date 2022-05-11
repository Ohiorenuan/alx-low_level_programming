#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Free dog_t
 * @d: The dog_t to be freed
 */
void free_dog(dog_t *d)
{
	free(d);
}
