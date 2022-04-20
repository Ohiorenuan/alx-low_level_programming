#include "main.h"
/**
 * puts2 - Prints every other character of a string
 * @str: String to be changed
 */
void puts2(char *str)
{
	int i, j;

	i = 0;
	j = 0;
	while (str[i])
	{
		i++;
	}
	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
