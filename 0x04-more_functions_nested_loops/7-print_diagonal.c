#include "main.h"
/**
 * print_diagonal - Prints a diagonal on the terminal
 * @n: The number of the character '\'
 */
void print_diagonal(int n)
{
	int a, b;

	a = n;
	if (a > 0)
	{
		while
			(a)
		{
			b = n - a;
			a--;
			while
				(b)
			{
				b--;
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
