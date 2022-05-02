#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: The buffer being copied to
 * @src: The buffer being copied from
 * @n: The number of bytes from src being copied
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
