#include "main.h"
/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: The string being searched in
 * @accept: The string used to search
 * Return: A pointer to one of the bytes that matches in accept of NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int n, i, j;
	char *a = 0;

	n = _count(s);
	i = 0;
	while (i < n)
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				a = s[i];
				i = n;
				break;
			}
			j++;
		}
		i++;
	}
	return (a);
}
