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

	n1 = _count(haystack);
	n2 = _count(needle);
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
/**
 * _count - Counts the number of items in a string
 * @s: The string to be counted
 * Return: The number of terms
 */
int _count(char *s)
{
	unsigned int num;

	num = 0;
	while (s[num])
		num++;
	return (num);
}
