#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: The string to be searched
 * @c: The string being searched for
 * Return: A pointer to the first occurence of the string or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int n, i;
	char *a = '\0';

	i = 0;
	n = (unsigned)sizeof(s);
	while (i < n)
	{
		if (s[i] == c)
		{
			a = &s[i];
			break;
		}
		i++;
	}
	return (a);
}
