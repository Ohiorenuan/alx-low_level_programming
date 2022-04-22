#include "main.h"
/**
 * rot13 - Encodes a string using rot13
 * @str: The string to be modified
 * Return: The modified string
 */
char *rot13(char *str)
{
	char frs[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char srf[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (frs[j])
		{
			if (str[i] == frs[j])
			{
				str[i] = srf[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
