#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: The buffer to be filled
 * @b: The constant byte
 * @n: The first n bytes of s to be filled
 * Return: A pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
