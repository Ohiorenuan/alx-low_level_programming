#include "main.h"
/**
 * _strncat - appends a string to the dest string but only at most n bytes
 * @dest: The string being appended to
 * @src: The string being appended
 * @n: The number of bytes
 * Return: The pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = b = 0;
	while (dest[a])
		a++;
	while ((b < n && src[b]))
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	if (b < n)
		src[b] = '\0';
	return (dest);
}
