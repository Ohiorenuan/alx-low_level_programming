#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: One of the string to be concatenated
 * @s2: One of the string to be concatenated
 * @n: The size of the new string created
 * Return: Pointer to the new string, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{ char *dest;
	unsigned int i, j, size1, size2, size3;

	size1 = size2 = size3 = i = j = 0;
	while (s1[i])
	{ size1++;
		i++; }
	i = 0;
	while (s2[i])
	{ size2++;
		i++; }
	i = 0;
	if (n >= size2)
		size3 = size1 + size2;
	else
		size3 = size1 + n;
	dest = malloc((size3 + 1) * sizeof(char));
	if (dest != NULL)
	{
		while (s1[i])
		{ dest[i] = s1[i];
			i++; }
		while (i <= size3)
		{ dest[i] = s2[j];
			i++;
			j++; }
		dest[i] = '\0'; }
	else
		free(dest);
	return (dest);
	free(dest); }
