#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: The string to be reversed
 */
void print_rev(char *s)
{
	int i;

	i = 1;
	while (*s)
	{
		i++;
		*s++;
	}
	while (i)
	{
		_putchar(*s);
		i--;
		*s--;
	}
	_putchar('\n');
}
