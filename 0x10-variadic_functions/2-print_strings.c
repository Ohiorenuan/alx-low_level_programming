#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - Prints strings, followed by a new line
 * @separator: The symbol to seperate printed strings
 * @n: Number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
	va_list str;

	if (n > 0)
	{
		va_start(str, n);
		for (i = 0; i < n - 1; i++)
		{
			ptr = va_arg(str, char *);
			if (ptr != NULL)
				printf("%s", ptr);
			else
				printf("(nil)");
			if (separator != NULL)
				printf("%s", separator); }
		ptr = va_arg(str, char *);
		if (ptr != NULL)
			printf("%s\n", ptr);
		else
			printf("(nil)");
		va_end(str); }
	printf("\n"); }
