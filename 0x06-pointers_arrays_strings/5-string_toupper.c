#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @a: The string to be modified
 * Return: The modified string
 */
char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i])
	{
		if (a[i] > 98 && a[i] < 123)
		{
			a[i] -= 32;
		}
		i++;
	}
	return (a);
}
