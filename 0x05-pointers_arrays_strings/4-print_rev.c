#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: The string to be reversed
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
