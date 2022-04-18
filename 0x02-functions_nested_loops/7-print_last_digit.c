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
		char b;

		a = -c % 10;
		b = (char)a;
		_putchar(b);
		return (a);
	}
	else
	{
		int d;
		char e;

		d = c % 10;
		e = (char)d;
		return (e);
	}
}
