#include "main.h"

/**
 * _isdigit - Checks for digit
 * @c: Character being evaluated
 *
 * Return: 1 for digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
