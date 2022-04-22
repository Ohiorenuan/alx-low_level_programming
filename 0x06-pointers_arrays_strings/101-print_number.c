#include "main.h"
/**
 * print_number - Prints an integer
 * @n: The number to be printed
 */
void print_number(int n)
{
	int m;

	m = n;
	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}

	if ((m / 10) > 0)
	{
		print_number((m / 10));
		_putchar((m % 10) + '0');
	}
	else
	{
		_putchar((m % 10) + '0');
	}
}
