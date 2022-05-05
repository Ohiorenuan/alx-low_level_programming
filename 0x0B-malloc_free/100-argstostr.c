#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concentenates all the arguments of your program
 * @ac: Number of arguments
 * @av: Array of arguments
 * Return: A pointer to a new string containing the concententated
 * string with each arguement followed by a new line and NULL if it
 * fails
 */
char *argstostr(int ac, char **av)
{ char *dest;
	int i, j;
	static int size, n;

	size = n = 0;
	if (ac == 0 || av == 0)
		dest = 0;
	else
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
				size++; }
		dest = malloc(size * sizeof(char) + 1);
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
			{ n++;
				dest[n] = av[i][j]; }
			n++;
			dest[n] = '\n'; }
		dest[n + 1] = 0; }
		return (dest); }
