#include "main.h"
/**
 * _strcat - appends a string to the dest string
 * @dest: The string being appended to
 * @src: The string being appended
 * Return: The pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = b = 0;
	while (dest[a])
		a++;
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	src[b] = '\0';
	return (dest);
}
