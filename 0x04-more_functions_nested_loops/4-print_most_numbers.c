#include "main.h"

/**
 * print_most_numbers - Prints the numbers 01356789 followed by a new line
 */
void print_most_numbers(void)
{
	int a;

	for
		(a = 0;
		 a <= 9;
		 a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
