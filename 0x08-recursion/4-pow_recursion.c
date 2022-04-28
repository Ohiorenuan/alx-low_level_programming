#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to the power or y
 * @x: The number being raised
 * @y: The exponent
 * Return: The result of the operation, -1 for error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y > 0)
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
	else
		return (1);
}
