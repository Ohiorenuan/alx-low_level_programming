#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * @min: The minimum value
 * @max: The maximum value
 * Return: The pointer to the newly created array
 */
int *array_range(int min, int max)
{ int range, i, n;
	int *ptr;
	if (max < min)
	{ return (NULL);
		exit(0); }
	range = max - min;
	ptr = malloc((range + 1) * sizeof(int));
	if (ptr)
	{
		for (i = 0, n = min; n <= max; i++, n++)
			ptr[i] = n; }
	else
		free(ptr);
	return (ptr); }
