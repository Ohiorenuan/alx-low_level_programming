#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Creates a duplicate of a string
 * @str: The string to be duplicated from
 * Return: A pointer to the duplicate string and NULL if string is
 * NULL or if insufficient memory was availaible
 */
char *_strdup(char *str)
{ char *dest;
	unsigned int i, size;

	size = 0;
	if (str == 0)
		dest = 0;
	else
	{
		for (i = 0; str[i]; i++)
			size++;
		dest = malloc((size + 1) * sizeof(char));
		if (dest != 0)
		{
			for (i = 0; i <= size; i++)
				dest[i] = str[i]; } }
	return (dest); }
