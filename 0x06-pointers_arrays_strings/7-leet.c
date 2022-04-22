#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @a: The string to be modified
 * Return: The modified string
 */
char *leet(char *a)
{
	char b[] = "aAeEoOtTlL";
	char c[] = "4433007711";
	int i;
	int j;

	i = 0;
	while (a[i])
	{
		j = 0;
		while (b[j])
		{
			if (a[i] == b[j])
				a[i] = c[j];
			j++;
		}
		i++;
	}
	return (a);
}
