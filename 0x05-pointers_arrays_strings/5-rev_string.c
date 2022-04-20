#include "main.h"
/**
 * rev_string - Prints a string in reverse
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int i;
	char *a, b;

	i = 0;
	j = 0;
	b = s;
	a = '\0';
	while (s[i])
	{
		i++;
	}

	while (i)
	{
		*(b - i)  = s[i - 1];
		i--;
/*		j++;*/
	}
	_putchar(b[3]);

}
