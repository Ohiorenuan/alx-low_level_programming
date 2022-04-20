#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to be swapped
 * @b: Pointer to be swapped
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
