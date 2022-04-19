#include "main.h"
/**
 * print_triangle - Prints a new line
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int a, b, c;

	a = size;
	if (a > 0)
	{
		while
			(a)
		{
			a--;
			b = size - a;
			c = a;
			while
				(c)
			{
				c--;
				_putchar(' ');
			}
			while
				(b)
			{
				b--;
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
