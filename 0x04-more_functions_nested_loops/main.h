#ifndef MAIN_H
#define MAIN_H

/**
 * _isupper - Checks for uppercase character
 * @c: Character being evaluated
 *
 * Return: 1 for uppercase and 0 otherwise
 */
int _islower(int c);

/**
 * _isdigit - Checks for digit
 * @c: Character being evaluated
 *
 * Return: 1 for digit and 0 otherwise
 */
int _isdigit(int c);

/**
 * mul - multiply two integers and returns the result
 * @a: Character being evaluated
 * @b: Character being evaluated
 *
 * Return: The product of the integers
 */
int mul(int a, int b);

/**
 * print_numbers - Prints the numbers 0 to 9 followed by a new line
 */
void print_numbers(void);

/**
 * print_most_numbers - Prints the numbers 01356789 followed by a new line
 */
void print_most_numbers(void);

#include "main.h"
/**
 * more_numbers - Prints the numbers 0 to 14 ten times
 */
void more_numbers(void);

/**
 * print_line - Prints the character _ n number of times
 * @n: The number of times _ is printed
 */
void print_line(int n);

#endif
