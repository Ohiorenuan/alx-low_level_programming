#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a 2-dimensional array of integers initialized
 * to zero
 * @width: Number of columns
 * @height: Number of rows
 * Return: A pointer to the 2-dimensional array created and NULL if
 * width or height is zero or on failure
 */
int **alloc_grid(int width, int height)
{ int **dest;
	int i, j;

	if (width == 0 && height == 0)
		dest = NULL;
	else
	{ dest = (int **)malloc(height * sizeof(int *));
		for (i = 0; i < height; i++)
			dest[i] = malloc(width * sizeof(int));
		if (dest != NULL)
		{
			for (i = 0; i < height; i++)
			{
				for (j = 0; j < width; j++)
					dest[i][j] = 0;
			} }
		else
			free(dest); }
	return (dest); }
