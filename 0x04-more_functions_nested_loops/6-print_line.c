#include "main.h"
/**
 * print_line - Prints the character _ n number of times
 * @n: The number of times _ is printed
 */
void print_line(int n)
{
	if (n > 0)
	{
		int a;

		for
			(a = 1;
			 a <= n;
			 a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
