#include "main.h"

/**
 * print_times_table - Prints a times table of n if 0<=n<=15
 * @n: Character to be evaluated
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i;
		int j;
		int mult;

		for
			(i = 0;
			 i <= 9;
			 i++)
		{
			for
				(j = 0;
				 j <= 9;
				 j++)
			{
				mult = i * j;
				if (mult <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (mult <= 100 && mult > 9)
				{
					_putchar(' ');
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else
				{
					_putchar('0' + (mult / 100));
					_putchar(((mult % 100) / 10) + '0');
					_putchar((mult % 100) + '0');
				}
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
