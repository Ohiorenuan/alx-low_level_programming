#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - Prints numbers, followed by a new line
 * @seperator: The symbol to seperate printed numbers
 * @n: Number of integers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list numbers;

	if (separator != NULL && n > 0)
	{
		va_start(numbers, n);
		for (i = 0; i < n - 1; i++)
		{ num = va_arg(numbers, int);
			printf("%d%s", num, separator); }
		num = va_arg(numbers, int);
		printf("%d\n", num);
		va_end(numbers);
	}
}
