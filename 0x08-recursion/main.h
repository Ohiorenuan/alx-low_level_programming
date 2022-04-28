#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to be printed
 */
void _puts_recursion(char *s);

/**
 * _puts_rev_recursion - Prints a string in reverse
 * @s: The string to be printed in reverse
 */
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string being evaluated
 * Return: The length of s
 */
int _strlen_recursion(char *s);

/**
 * factorial - Returns the factorial of a given number
 * @n: The number being evaluated
 * Return: The factorial of n. -1 for error
 */
int factorial(int n);

/**
 * _pow_recursion - Returns the value of x raised to the power or y
 * @x: The number being raised
 * @y: The exponent
 * Return: The result of the operation, -1 for error
 */
int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - Returns the natural squareroot of a number
 * @n: The number being evaluated
 * Return: Squareroot of n, -1 if theres no squareroot
 */
int _sqrt_recursion(int n);

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number being evaluated
 * Return: 1 if its prime, 0 if not
 */
int is_prime_number(int n);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string being evaluated
 * Return: 1 if its a palindrome
 */
int is_palindrome(char *s);

/**
 * wildcmp - Compares two strings
 * @s1: One of the string being evaluated
 * @s2: One of the string being evaluated
 * Return: 1 if they are considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2);

#endif
