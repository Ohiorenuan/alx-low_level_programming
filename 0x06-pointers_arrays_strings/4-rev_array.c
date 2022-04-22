#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array to be reversed
 * @n: The number of elements in array n
 */
void reverse_array(int *a, int n)
{
	int i, b, g;

	g = 0;
	i = n / 2;
	while (g < i)
	{
		b = a[g];
		a[g] = a[n - 1];
		a[n - 1] = b;
		g++;
		n--;
	}
}
