#include "main.h"
/**
 * _puts - Prints a string to standard output
 * @str: String to be printed
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
