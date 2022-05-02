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

	n = (unsigned)sizeof(s);
	i = num = 0;
	while (i < n)
	{
		j = 0;
		if (s[i] == ' ')
			break;
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
