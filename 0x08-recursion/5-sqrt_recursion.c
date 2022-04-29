#include "main.h"
/**
 * _sqrt_recursion - Returns the natural squareroot of a number
 * @n: The number being evaluated
 * Return: Squareroot of n, -1 if theres no squareroot
 */
int _sqrt_recursion(int n)
{
	int c;

	c = 1;
	return (act_func(n, c));
}
/**
 * act_func - Does the job of _sqrt_recursion and preserves my sanity
 * @n: The number which sqrt is being evaluated
 * @a: A counter because I need a counter
 * Return: The sqrt or -1 if non is found
 */
int act_func(int n, int a)
{
	if ((a * a) < n)
		return (act_func(n, a + 1));
	else if ((a * a) > n)
		return (-1);
	else
		return (a);
}
