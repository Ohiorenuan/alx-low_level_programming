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
