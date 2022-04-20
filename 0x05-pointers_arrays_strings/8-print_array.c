#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints n elements of an array of integers
 * @a: Array to be printed
 * @n: Number of elements in a
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0;
		     i < n;
		     i++)
		{
			if (i < (n - 1))
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d\n", a[i]);
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
