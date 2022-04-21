#include "main.h"
/**
 * rev_string - Prints a string in reverse
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int n, i, a;
	char *front, *back;

	n = a = 0;
	front = back = s;
	while (s[n])
	{
		n++;
	}
	i = n / 2;
	while (n > 0)
	{
		if (a <= i)
		{
			s[a] = back[n - 1];
			a++;
			i--;
		}
		else
		{
			s[a] = front[n - 1];
			a++;
			i--;
		}
	}
}
