#include "main.h"
/**
 * puts_half - Prints half of a string
 * @str: The string to be printed
 */
void puts_half(char *str)
{
	int n, a;

	n = 0;
	a = 0;
	while (str[n])
	{
		n++;
	}
	a = n / 2;
	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
