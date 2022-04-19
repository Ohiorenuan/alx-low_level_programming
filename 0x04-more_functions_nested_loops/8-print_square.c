#include "main.h"
/**
 * print_square - Prints a square followed by a new line
 * @size: The legth of the square
 */
void print_square(int size)
{
	int a, b;

	a = size;
	if (size > 0)
	{
		while
			(a)
		{
			b = size;
			a--;
			while
				(b)
			{
				b--;
				_putchar('#');
			}
			_putchar('\n');
		}
	}
/*	_putchar('\n');*/
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
