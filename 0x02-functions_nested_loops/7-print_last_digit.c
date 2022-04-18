#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @c: Character being evaluated
 *
 * Return: The last digit of c
 */
int print_last_digit(int c)
{
	if (c < 0)
	{
		int a;

		a = -c % 10;
		_putchar('0' + a);
		return (a);
	}
	else
	{
		int a;

		a = c % 10;
		_putchar('0' + a);
		return (a);
	}
}
