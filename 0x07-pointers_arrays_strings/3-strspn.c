#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string being searched in
 * @accept: The string used to search
 * Return: The number of bytes which consists of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, i, j, num;

	n = _count(s);
	i = num = 0;
	while (i < n)
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				num++;
			j++;
		}
		i++;
	}
	return (num);
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
