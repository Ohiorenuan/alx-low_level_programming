#include "main.h"
/**
 * _strcpy - Copies strings pointed to by src
 * @dest: the pointer to dest
 * @src: string pointed to
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (src[i])
	{
		i++;
	}
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
