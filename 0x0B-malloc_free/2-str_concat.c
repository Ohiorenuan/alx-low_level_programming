#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings
 * @s1: One of the string to be concatenated
 * @s2: One of the string to be concatenated
 * Return: A pointer to the string containing the concentenated
 * string and NULL if it's an empty string or on failure
 */
char *str_concat(char *s1, char *s2)
{ unsigned int size1, size2, i;
	char *dest;

	size1 = size2 = 0;
	for (i = 0; s1[i]; i++)
		size1++;
	for (i = 0; s2[i]; i++)
		size2++;
	if (size1 != 0 && size2 != 0)
	{ dest = malloc((size1 + size2) * sizeof(char) + 1);
		for (i = 0; s1[i]; i++)
			dest[i] = s1[i];
		for (i = 0; i <= size2; i++)
			dest[size1 + i] = s2[i]; }
	return (dest); }
