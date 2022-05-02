#include "main.h"
/**
 * _strcmp - Works like strcmp
 * @s1: First string
 * @s2: Second string
 * Return: An integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, d;

	i = d = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	d = (s1[i] - s2[i]) + 0;
	return (d);
}
