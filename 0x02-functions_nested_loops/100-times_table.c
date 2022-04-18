#include "main.h"
/**
 * print_times_table - Prints a times table of n if 0<=n<=15
 * @n: Character to be evaluated
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, mult, b;

		for
			(i = 0;
			 i <= n;
			 i++)
		{
			_putchar('0');
			for
				(j = 1;
				 j <= n;
				 j++)
			{
				mult = i * j;
				b = (mult / 10) % 10;
				_putchar(',');
				_putchar(' ');
				if ((mult / 100) == 0 && b == 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if ((mult / 100) == 0 && b != 0)
				{
					_putchar(' ');
					_putchar(b + '0');
				}
				else
				{
					_putchar((mult / 100) + '0');
					_putchar(b + '0');
				}
				_putchar((mult % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
