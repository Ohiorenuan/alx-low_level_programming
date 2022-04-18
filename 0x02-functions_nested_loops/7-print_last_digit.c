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
		return (-c % 10);
	}
	else
	{
		return (c % 10);
	}
}
