#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: String to be evaulated
 * Return: The length of the s
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
