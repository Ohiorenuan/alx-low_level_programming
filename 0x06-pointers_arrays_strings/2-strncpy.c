#include "main.h"
/**
 * _strncpy - Works like strncpy
 * @dest: String being appended to
 * @src: String being appended from
 * @n: The number of bytes being appended
 * Return: The modified string
 */
char _strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (src[i])
	{
		i++;
	}
	while (j < n && src[j])
	{
		if (src[j] == '\n')
		{
			dest[j] = '\0';
			break;
		}
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
