#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of parameters passed
 * Return: The sum of the parameters passed or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int result;

	result = 0;
	if (n == 0)
		return (0);
	va_start(numbers, n);
	for (i = 0; i < n; i++)
		result += va_arg(numbers, int);
	va_end (numbers);
	return (result); }
