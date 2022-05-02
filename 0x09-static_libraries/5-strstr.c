#include "main.h"
/**
 * _strstr - Locates a substring
 * @haystack: The sring being searched in
 * @needle: The substring being searched for
 * Return: A pointer to the first occurence of needle
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, n1, n2, i1;
	char *a = 0;

	n1 = (unsigned)sizeof(haystack);
	n2 = (unsigned)sizeof(needle);
	i = 0;
	while (i < n1)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			j++;
			i1 = i + 1;
			while (j < n2)
			{
				if (haystack[i1] != needle[j])
					break;
				j++;
				if (j == n2)
				{
					a = &haystack[i];
					i = n1;
				}
			}
		}
		i++;
	}
	return (a);
}
