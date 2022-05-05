#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars, and initializes it
 * with a specific char
 * @size: The size of the array of chars
 * @c: The char
 * Return: A pointer to the created array and NULL if it fails
 */
char *create_array(unsigned int size, char c)
{char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == 0)
		str = 0;
	else
	{
		for (i = 0; i < size; i++)
			str[i] = c; }
	return (str); }
