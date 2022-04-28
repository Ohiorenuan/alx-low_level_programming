#include "main.h"
/**
 * factorial - Returns the factorial of a given number
 * @n: The number being evaluated
 * Return: The factorial of n. -1 for error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (1);
}
