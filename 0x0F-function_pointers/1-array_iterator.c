#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array to be iterated
 * @size: The size of the array
 * @action: Pointer to the funtion to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]); }
