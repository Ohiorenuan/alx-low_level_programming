#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @c: Character being evaluated
 *
 * Return: The absolute value of c
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else
	{
		return (c);
	}
}
