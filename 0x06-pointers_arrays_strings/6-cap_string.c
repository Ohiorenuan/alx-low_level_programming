#include "main.h"
/**
 * cap_string - Capitalize all word using seperators
 * @a: The string to be modiefied
 * Return: The modified string
 */
char *cap_string(char *a)
{
	int i, j;
	char t[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125, '\0'};

	i = 0;
	do {
		if (a[i] > 96 && a[i] < 123)
		{
			j = 0;
			while (t[j])
			{
				if (a[i - 1] == t[j])
				{
					a[i] -= 32;
				}
				j++;
			}
		}
		i++;
	} while (a[i]);
	return (a);
}
