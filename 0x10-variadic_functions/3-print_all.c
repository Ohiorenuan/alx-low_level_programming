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
	int i;
	float f;
	char *s;
	char swi;

	i = 0;
	va_start(list, format);
	while (format[i])
	{
		swi = format[i];
		switch (swi)
		{
		case 'c':
			c = va_arg(list, int);
			printf("%c", c);
			break;
		case 'i':
			i = va_arg(list, int);
			printf("%d", i);
			break;
		case 'f':
			f = va_arg(list, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(list, char *);
			if (s == NULL)
			{ printf("(nil)");
				break; }
			printf("%s", s);
			break;
		default:
			;
		}
		if (format[i + 1])
			printf(", ");
		i++; }
	printf("\n"); }
