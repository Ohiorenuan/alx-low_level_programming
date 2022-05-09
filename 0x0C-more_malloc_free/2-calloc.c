#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: The number of elements
 * @size: The size of each element
 * Return: A pointer to the new memory created
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{ void *dest;
	char *str;
	unsigned int n;

	n = nmemb * size;
	str = malloc(n);
	dest = malloc(n);
	if (dest != NULL && str != NULL)
	{
		for (n = 0; n < nmemb; n++)
			str[n] = 0;
		dest = (void *)str; }
	else
	{ free(dest);
		free(str); }
	return (dest);
	free(dest);
	free(str); }
