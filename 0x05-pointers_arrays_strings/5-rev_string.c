#include "main.h"
/**
 * rev_string - Prints a string in reverse
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int i, j;

	i = 1;
	j = 0;
	while (*s)
	{
		i++;
		*s++;
	}
	char a[i - 1];

	while (i)
	{
		a[j] = *(s - 1);
		i--;
		j++;
		*s--;
	}
	_putchar(a[0] + '0');
	s = a;
}
