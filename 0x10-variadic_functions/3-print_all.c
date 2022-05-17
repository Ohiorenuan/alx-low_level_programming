#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - Prints anything
 * @format: Types of arguements passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char c;
	int i, j;
	float f;
	char *str;
	char swi;

	i = j = 0;
	va_start(list, format);
	while (format[i])
	{
		swi = format[i];
		switch (swi)
		{
		case 'c':
			c = va_arg(list, int);
			printf("%c", c);
			j = 1;
			break;
		case 'i':
			i = va_arg(list, int);
			printf("%d", i);
			j = 1;
			break;
		case 'f':
			f = va_arg(list, double);
			printf("%f", f);
			j = 1;
			break;
		case 's':
			str = va_arg(list, char *);
			if (str == NULL)
			{ printf("(nil)");
				j = 1;
				break; }
			printf("%s", str);
			j = 1;
			break;
		default:
			j = 0;
			break;
		}
		if (format[i + 1] && j)
			printf(", ");
		i++; }
	printf("\n"); }
