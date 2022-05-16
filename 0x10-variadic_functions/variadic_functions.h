#ifndef __VARIADIC_FUNCTIONS__
#define __VARIADIC_FUNCTIONS__
#include <stdarg.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of parameters passed
 * Return: The sum of the parameters passed or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: The symbol to seperate printed numbers
 * @n: Number of integers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: The symbol to seperate printed strings
 * @n: Number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - Prints anything
 * @format: Types of arguements passed to the function
 */
void print_all(const char * const format, ...);

#endif
