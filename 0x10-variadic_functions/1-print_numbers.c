#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: The symbol to seperate printed numbers
 * @n: Number of integers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list numbers;

	if (n > 0)
	{
		va_start(numbers, n);
		for (i = 0; i < n - 1; i++)
		{ num = va_arg(numbers, int);
			if (separator != NULL)
				printf("%d%s", num, separator);
			else
				printf("%d", num);
		}
		num = va_arg(numbers, int);
		printf("%d", num);
		va_end(numbers);
	}
	printf("\n");
}
