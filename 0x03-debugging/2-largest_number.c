#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;


	if ((a == b || b == c || c == a) && !(a == b && a == c && b == c))
	{
		if ((b > c || b > a) && (a > b))
		{
			largest = a;
		}
	}
	else if ((a > b && a > c) && !(a == b || b == c || c == a))
	{
		largest = a;
	}
	else if ((c > a && c > b) && !(a == b || b == c || c == a))
	{
		largest = c;
	}
	else
	{
		largest = b;
	}

	return (largest);
}
