#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: The string to be searched
 * @c: The string being searched for
 * Return: A pointer to the first occurence of the string or NULL
 */
char *_strchr(char *s, char c)
{
	int n, i;
	char *a = 0;

	i = 0;
	n = _count(s);
	while (i < n)
	{
		if (s[i] == c)
		{
			a = s[i];
			break;
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
int _count(char *s);
{
	unsigned int num;

	num = 0;
	while (s[num])
		num++;
	return (num);
}
