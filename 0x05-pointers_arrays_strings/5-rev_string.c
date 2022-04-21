#include "main.h"
/**
 * rev_string - Prints a string in reverse
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int n, i, a;
	char b;

	n = a = 0;
	while (s[n])
	{
		n++;
	}

	i = n / 2;
	while (a < i)
	{
		b = s[a];
		s[a] = s[n - 1];
		s[n - 1] = b;
		a++;
		n--;
	}
}
