#include "main.h"
/**
 * _sqrt_recursion - Returns the natural squareroot of a number
 * @n: The number being evaluated
 * Return: Squareroot of n, -1 if theres no squareroot
 */
int _sqrt_recursion(int n)
{
	int a;

	a = n;
	if (a * a != n)
	{
		a--;
		
