#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 * @array: The array being searched
 * @size: Number of elements in the array
 * @cmp: Pointer to the funtion used to compare values
 * Return: Index of the first element for which cmp does not return 0
 * or returns 1 if no element matches or size < 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{ int i;

	if (size < 1)
	{ return (-1);
		exit(0); }
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
		{ return (i);
			exit(0); }
	return (-1); }
