#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - Prints out a character
 * @c: Character to be printed
 *
 * Return: The character c
 */
int _putchar(char c);

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - Prints 10 times the alphabet
 */
void print_alphabet_x10(void);

/**
 * _islower - Checks for lowercase character
 * @c: Character being evaluated
 *
 * Return: 1 for lowercase and 0 otherwise
 */
int _islower(int c);

/**
 * _isalpha - checks for alphabetic character
 * @c: Character being evaluated
 *
 * Return: 1 for letter and 0 otherwise
 */
int _isalpha(int c);

/**
 * print_sign - prints the sign of a number
 * @n: Character to be evaluated
 *
 *Return: 1 if greater than zero, 0 if zero and -1 if less than zero
 */
int print_sign(int n);

/**
 * _abs - computes the absolute value of an integer
 * @c: Character being evaluated
 *
 * Return: The absolute value of c
 */
int _abs(int c);

/**
 * print_last_digit - Prints the last digit of a number
 * @c: Character being evaluated
 *
 * Return: The last digit of c
 */
int print_last_digit(int c);

/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59
 */
void jack_bauer(void);

/**
 * times_table - prints the 9 times table starting with 0
 */
void times_table(void);

/**
 * add - adds two integers and returns the result
 * @c: Character being evaluated
 * @d: Character being evaluated
 *
 * Return: The sum of the integer
 */
int add(int c, int d);

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Character to be evaluated
 */
void print_to_98(int n);

/**
 * print_times_table - Prints a times table of n if 0<=n<=15
 * @n: Character to be evaluated
 */
void print_times_table(int n);

#endif
